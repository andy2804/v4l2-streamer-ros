#include "UART_HalfDuplex.h"
#include "flirCRC.h"
#include "flirChannels.h"

#include <stdio.h>

#include "rs232.h"
#if defined(__linux__) || defined(__FreeBSD__)
#include <time.h>
#include <unistd.h>
#include <sys/time.h>

#else  //on windows

#include <Windows.h>
#define CLOCK_MONOTONIC 0
struct timespec { long tv_sec; long tv_nsec; };    //header part
int clock_gettime(int _ignore, struct timespec *spec)      //C-file part
{
    __int64 wintime; GetSystemTimeAsFileTime((FILETIME*)&wintime);
    wintime      -=116444736000000000L;  //1jan1601 to 1jan1970
    spec->tv_sec  =wintime / 10000000L;           //seconds
    spec->tv_nsec =wintime % 10000000L *100;      //nano-seconds
    return 0;
}

double difftime(long current, long reference)
{
    return ((double)current - (double)reference);
}

#endif


#define DO_ERROR_TRACE(x...)    printf(x)
#define DO_DEBUG_TRACE(x...)    //printf(x)
#define DO_VERBOSE_TRACE(x...)  //printf(x)

#define ESCAPE_BYTE        0x9E
#define START_FRAME_BYTE   0x8E
#define END_FRAME_BYTE     0xAE
#define ESCAPED_ESCAPE_BYTE        0x91
#define ESCAPED_START_FRAME_BYTE   0x81
#define ESCAPED_END_FRAME_BYTE     0xA1

#define NUM_FRAMING_BYTES 3
#define FRAME_START_IDX 1
#define CRC_START_IDX 0

#define FRAME_BUF_SIZ      2048

#define FRAME_TIMEOUT_SEC   2.000
#define POLL_TIMEOUT_SEC   0.025
#define BYTE_TIMEOUT_SEC    0.005

static uint8_t in_frame_buf[FRAME_BUF_SIZ];
static uint8_t out_frame_buf[FRAME_BUF_SIZ];

enum frame_state_e {
    UNFRAMED = 0,
    CORRECT_FRAME = 1,
    OTHER_FRAME = 2,
};
typedef enum frame_state_e frame_state;

static uint8_t other_frame_ID;

uint8_t open_port(int32_t port_num, int32_t baud_rate){
    int success = RS232_OpenComport(port_num, baud_rate, "8N1");
    return (uint8_t) success; // 0 == success.
}

void close_port(int32_t port_num){
    RS232_CloseComport(port_num);
}

double diff_timespec(struct timespec *current, struct timespec *reference)
{
    double elapsed_sec = difftime(current->tv_sec, reference->tv_sec);
    elapsed_sec += (((double)current->tv_nsec) - ((double)reference->tv_nsec))/1000000000;
    return elapsed_sec;
}

static int16_t read_byte(int32_t port_num)
{
    struct timespec start_t,current_t;
    double elapsed_sec;
    clock_gettime(CLOCK_MONOTONIC, &start_t);

    uint8_t in_byte = 0x00;
    int ret = RS232_PollComport(port_num, &in_byte, 1);
    while (ret == 0){
        clock_gettime(CLOCK_MONOTONIC, &current_t);
        elapsed_sec = diff_timespec(&current_t, &start_t);
        if (elapsed_sec >= BYTE_TIMEOUT_SEC){
            return -1;
        }
        ret = RS232_PollComport(port_num, &in_byte, 1);
    }

    if (ret < 0) {
        return -1;
    }

    return (int16_t) in_byte;
}


static inline int write_byte(int32_t port_num,int outc)
{
    uint8_t c = outc & 0xFF;
    int success;
    while (1){
        success = RS232_SendByte(port_num, c);
        if (success == 0){
            break;
        } else{

            DO_DEBUG_TRACE("SendByte code: %d",success);

            return success;
        }
    }
    RS232_flushTX(port_num);
    return success;
}

static void extract_payload(uint8_t* raw_payload_buf, uint32_t raw_payload_len, uint8_t* payload_buf, uint32_t* payload_len)
{
    uint32_t i;

    for(*payload_len=0, i=0; i < raw_payload_len; i++)
    {
        // if (raw_payload_buf[i] == ESCAPE_BYTE) i++;
        payload_buf[(*payload_len)++] = raw_payload_buf[i];
    }
}

int32_t read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer)
{
    int32_t byte_idx = 0;
    int32_t tempval = 0;
    frame_state am_in_frame = UNFRAMED;
    uint8_t found_complete_frame=0, in_escape=0;
    uint8_t c;
    // uint8_t failedcrc = 0;
    uint16_t calc_crc;

    if (get_channel(channel_ID, &chan_ptr))
        DO_ERROR_TRACE("Channel not found for channel_ID [0x%02x]\n", channel_ID);
    get_unframed(&unframed_ptr);

    struct timespec start_t,current_t;
    double elapsed_sec;
    clock_gettime(CLOCK_MONOTONIC, &start_t);
    double timeout = (double)start_byte_ms/1000.0;
    *receiveBytes =  0;

    if (chan_ptr && (chan_ptr->len > 0)) {

        int i,j;
        DO_DEBUG_TRACE("POLL buffer start = %d, len = %d \n", chan_ptr->start, chan_ptr->len);
        DO_DEBUG_TRACE("current buffer[20] : ");
        for (j = 0; j < 20; j++){
            i = ( (chan_ptr->start + j ) % CHANNEL_BUF_SIZ);
            DO_DEBUG_TRACE(" %02X", chan_ptr->buff[i]);
        }
        DO_DEBUG_TRACE("\n");

        while (chan_ptr->len > 0) {

            // if (i==poll_idx_lo) DO_DEBUG_TRACE("Entered PROCESS_BUFF_%02d\n",chan_ptr->channel);

            int32_t ret = get_byte(&c, chan_ptr);
            if (ret < 0){
                DO_ERROR_TRACE("Failed to get_byte\n");
                DO_VERBOSE_TRACE("Breaking the pre-received path\n");
                break;
            } else {
                DO_VERBOSE_TRACE("Next byte: [0x%02x]\n", c);
            }

            if (c == START_FRAME_BYTE)
            {
                DO_DEBUG_TRACE("     POLL_RX_BUF StartByte \n ");

                timeout = FRAME_TIMEOUT_SEC;
                DO_VERBOSE_TRACE("Setting timeout to FRAME_TIMEOUT_SEC\n");
                byte_idx = 0;
                am_in_frame = CORRECT_FRAME;
                DO_VERBOSE_TRACE("Am in CORRECT_FRAME\n");
                DO_VERBOSE_TRACE("Continuing (to get_byte stage)\n");
                continue;
            }
            if (am_in_frame) {

                if (c == ESCAPE_BYTE)
                {
                    in_escape = 1;
                    int32_t ret = get_byte(&c,chan_ptr);
                    if (ret < 0){
                        DO_ERROR_TRACE("Failed to get_byte\n");
                        DO_VERBOSE_TRACE("Breaking the pre-received path\n");
                        break;
                    }
                    switch (c){
                        case ESCAPED_END_FRAME_BYTE:
                            c = END_FRAME_BYTE;
                            break;
                        case ESCAPED_START_FRAME_BYTE:
                            c = START_FRAME_BYTE;
                            break;
                        case ESCAPED_ESCAPE_BYTE:
                            c = ESCAPE_BYTE;
                            break;
                        default:
                            break;
                    }

                    in_frame_buf[byte_idx++] = c;
                    DO_DEBUG_TRACE(" %02X",c);
                    DO_VERBOSE_TRACE("in_frame_buf[%d] [%02X]",(byte_idx - 1), c);
                    DO_VERBOSE_TRACE("Continuing (to get_byte stage)\n");
                    continue;
                }

                if (c == END_FRAME_BYTE)
                {
                    DO_VERBOSE_TRACE("Am in UNFRAMED\n");
                    am_in_frame = UNFRAMED;
                    /*
                     * Check CRC: if good end loop.  If bad, start looking for start byte.
                     * Check Frame Status:  If zero, end loop.  If non-zero, start looking for start byte.
                     */

                     /*
                      * byte_idx - 3 = total frame length - channel_ID byte - crc_bytes[2]
                      * &(frame_buf[1]) is first byte after channel_ID byte
                      */
                    calc_crc = calcFlirCRC16Bytes((byte_idx - 2), &(in_frame_buf[CRC_START_IDX]));

                    if ( (((calc_crc >> 8) &0xFF) != in_frame_buf[byte_idx - 2]) || ((calc_crc &0xFF) != in_frame_buf[byte_idx - 1]) )
                    {
                        DO_ERROR_TRACE("\nFailed packet integrity check (calc) %02X%02X !=  (recd) %02X%02X\n",((calc_crc >> 8) &0xFF),(calc_crc&0xFF),in_frame_buf[byte_idx - 2],in_frame_buf[byte_idx - 1]);
                        DO_ERROR_TRACE("RAW Receive Packet: ");
                        for (i = 0; i < byte_idx; i++){
                            DO_ERROR_TRACE(" %02X",in_frame_buf[i]);
                        }
                        DO_ERROR_TRACE("\n");
                        // DO_ERROR_TRACE("     Failed time %f:\n",elapsed_sec);
                        // failedcrc = 1;
                        byte_idx = 0;

                        timeout = POLL_TIMEOUT_SEC;
                        DO_VERBOSE_TRACE("Setting timeout to POLL_TIMEOUT_SEC\n");
                        DO_VERBOSE_TRACE("Continuing (to get_byte stage)\n");
                        continue;
                    } else {
                        DO_DEBUG_TRACE("\n");
                    }

                    found_complete_frame = 1;
                    DO_VERBOSE_TRACE("Found a complete frame - breaking the pre-received path\n");
                    break;
                }


                in_frame_buf[byte_idx++] = c;
                DO_VERBOSE_TRACE("in_frame_buf[%d] [0x%02x]\n", (byte_idx - 1), c);
                DO_DEBUG_TRACE(" %02X",c);

                DO_VERBOSE_TRACE("Continuing (to get_byte stage)\n");
                continue;
            }
        }
    }

    if (found_complete_frame) {

        DO_DEBUG_TRACE("Found Complete Frame in channel_buf_%02d\n",chan_ptr->channel);
        DO_DEBUG_TRACE("current buffer start = %d, len = %d \n",chan_ptr->start,chan_ptr->len);

        extract_payload(&(in_frame_buf[FRAME_START_IDX]), (byte_idx - NUM_FRAMING_BYTES), receiveBuffer, receiveBytes);
        return 0;
    }

    DO_DEBUG_TRACE("Entering serial loop...\n");

    clock_gettime(CLOCK_MONOTONIC, &start_t);
    while(1)
    {
        // if (failedcrc){
            // DO_ERROR_TRACE("AFTER FAIL: %f\n",elapsed_sec);
        // }
        if (byte_idx == FRAME_BUF_SIZ)
        {
            // Buffer overrun
            DO_ERROR_TRACE("Buffer overrun - exitting\n");
            return -1;
        }

        clock_gettime(CLOCK_MONOTONIC, &current_t);
        elapsed_sec = diff_timespec(&current_t, &start_t);

        // The whole thing has been taking too long
        if (elapsed_sec >= timeout){
            DO_DEBUG_TRACE("Frame reading has been taking too long [%f]\n", elapsed_sec);
            DO_ERROR_TRACE("Timeout: %f s\n", elapsed_sec);

            if (am_in_frame == CORRECT_FRAME) {
                int i;
                DO_VERBOSE_TRACE("Timeout while in CORRECT_FRAME: %f s\n", elapsed_sec);

                DO_ERROR_TRACE("Received frame fragment - len:[%d] : ", byte_idx);
                for (i = 0; i < byte_idx; i++){
                    DO_ERROR_TRACE(" %02X", in_frame_buf[i]);
                }
                DO_ERROR_TRACE("\n");
            } else {
                DO_VERBOSE_TRACE("Timeout while in %s: %f s\n", (am_in_frame) ? "OTHER_FRAME" : "UNFRAMED", elapsed_sec);
            }

            *receiveBytes =  0;
            am_in_frame = UNFRAMED;
            return -1;
        }

        if (in_escape && (am_in_frame == CORRECT_FRAME)) {
            //carryover escape character from buffer
            tempval = ESCAPE_BYTE;
        } else {
            //normal operations
            tempval = read_byte(port_num);
        }

        if (tempval<0) {
            clock_gettime(CLOCK_MONOTONIC, &current_t);
            elapsed_sec = diff_timespec(&current_t, &start_t);
            DO_DEBUG_TRACE("Timeout in read_byte; current frame read time %f\n", elapsed_sec);
            DO_VERBOSE_TRACE("Continuing...\n");
            continue; //byte read timeout.
        } else {
            c = (uint8_t) tempval;
            DO_VERBOSE_TRACE("Next byte: [0x%02x]\n", c);
        }

        if ((c & 0xFF) == (START_FRAME_BYTE & 0xFF))
        {
            DO_DEBUG_TRACE("     StartByte time %f:\n     ",elapsed_sec);

            timeout = FRAME_TIMEOUT_SEC;
            DO_VERBOSE_TRACE("Setting timeout to FRAME_TIMEOUT_SEC\n");
            byte_idx = 0;
            do {
                clock_gettime(CLOCK_MONOTONIC, &current_t);
                elapsed_sec = diff_timespec(&current_t, &start_t);
                if (elapsed_sec > timeout) {
                    break;
                }
                tempval = read_byte(port_num);
            } while (tempval < 0);
            if (tempval < 0) {
                DO_VERBOSE_TRACE("Timeout in read_byte\n");
                DO_VERBOSE_TRACE("Continuing...\n");
                continue;
            }

            c = (uint8_t) tempval & 0xFF;
            uint8_t needs_escape = 0;
            if (c == ESCAPE_BYTE){
                needs_escape = 1;
                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec > timeout) {
                        break;
                    }
                    tempval = read_byte(port_num);
                } while (tempval < 0);
                if (tempval < 0) {
                    DO_VERBOSE_TRACE("Timeout in read_byte\n");
                    DO_VERBOSE_TRACE("Continuing...\n");
                    continue;
                }
                c = (uint8_t) tempval & 0xFF;
            }

            if (c == channel_ID) {
                //found correct frame
                DO_VERBOSE_TRACE("Am in CORRECT_FRAME\n");
                am_in_frame = CORRECT_FRAME;
                in_frame_buf[byte_idx++] = c;
                DO_VERBOSE_TRACE("in_frame_buf[%d] [0x%02x]\n", (byte_idx - 1), c);
            } else {
                DO_VERBOSE_TRACE("Am in OTHER_FRAME (0x%02x)\n", c);
                am_in_frame = OTHER_FRAME;
                other_frame_ID = c;
                get_channel(other_frame_ID, &chan_ptr);
                if (!chan_ptr){
                    DO_ERROR_TRACE("Incoming frame's channel (0x%02x) not found\n", other_frame_ID);
                    chan_ptr = unframed_ptr;
                    am_in_frame = UNFRAMED;
                    DO_VERBOSE_TRACE("Am in UNFRAMED\n");
                }
                add_byte(START_FRAME_BYTE,chan_ptr);
                if(needs_escape)
                    add_byte(ESCAPE_BYTE,chan_ptr);
                add_byte(c,chan_ptr);
                DO_VERBOSE_TRACE("Add START + (ESCAPE) + [0x%02x]\n", c);
            }

            DO_VERBOSE_TRACE("Continuing...\n");
            continue;
        }

        if (am_in_frame == CORRECT_FRAME) {
            if ((c & 0xFF) == (ESCAPE_BYTE & 0xFF))
            {
                in_escape = 1;

                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec>timeout) {
                        break;
                    }
                    tempval = read_byte(port_num);
                } while (tempval < 0);
                if (tempval < 0) {
                    DO_VERBOSE_TRACE("Timeout in read_byte\n");
                    DO_VERBOSE_TRACE("Continuing...\n");
                    continue;
                }

                c = (uint8_t) tempval;
                switch (c){
                    case ESCAPED_END_FRAME_BYTE:
                        c = END_FRAME_BYTE;
                        break;
                    case ESCAPED_START_FRAME_BYTE:
                        c = START_FRAME_BYTE;
                        break;
                    case ESCAPED_ESCAPE_BYTE:
                        c = ESCAPE_BYTE;
                        break;
                    default:
                        break;
                }
                in_frame_buf[byte_idx++] = c;
                in_escape = 0;
                DO_VERBOSE_TRACE("in_frame_buf[%d] [0x%02x]\n", (byte_idx - 1), c);
                DO_DEBUG_TRACE(" %02X",c);

                DO_VERBOSE_TRACE("Continuing...\n");
                continue;
            }

            if ((c & 0xFF) == (END_FRAME_BYTE & 0xFF))
            {
                // DO_ERROR_TRACE("\n     EndByte time %f:\n",elapsed_sec);
                // frame_buf[byte_idx++] = c;

                /*
                 * Check CRC: if good end loop.  If bad, start looking for start byte.
                 * Check Frame Status:  If zero, end loop.  If non-zero, start looking for start byte.
                 */

                 /*
                  * byte_idx - 3 = total frame length - channel_ID byte - crc_bytes[2]
                  * &(frame_buf[1]) is first byte after channel_ID byte
                  */

                DO_VERBOSE_TRACE("End frame byte\n");
                am_in_frame = UNFRAMED;
                DO_VERBOSE_TRACE("Am in UNFRAMED\n");

                calc_crc = calcFlirCRC16Bytes((byte_idx - 2), &(in_frame_buf[CRC_START_IDX]));

                if ( (((calc_crc >> 8) &0xFF) != in_frame_buf[byte_idx - 2]) || ((calc_crc &0xFF) != in_frame_buf[byte_idx - 1]) )
                {
                    int i;
                    DO_ERROR_TRACE("Failed POLL packet integrity check (calc) %02X%02X !=  (recd) %02X%02X\n",((calc_crc >> 8) &0xFF),(calc_crc&0xFF),in_frame_buf[byte_idx - 2],in_frame_buf[byte_idx - 1]);
                    DO_ERROR_TRACE("RAW Receive Packet: ");
                    for (i = 0; i < byte_idx; i++){
                        DO_ERROR_TRACE(" %02X", in_frame_buf[i]);
                    }
                    DO_ERROR_TRACE("\n");
                    // DO_ERROR_TRACE("     Failed time %f:\n",elapsed_sec);
                    // failedcrc = 1;
                    byte_idx = 0;
                    clock_gettime(CLOCK_MONOTONIC, &start_t);
                    timeout= (double)start_byte_ms/1000.0;
                    DO_VERBOSE_TRACE("Setting timeout to [%f]\n", timeout);
                    DO_VERBOSE_TRACE("Continuing...\n");
                    continue;
                } else {
                    DO_DEBUG_TRACE("\n");
                }

                DO_VERBOSE_TRACE("Found complete frame\n");
                found_complete_frame = 1;
                DO_VERBOSE_TRACE("Breaking the serial loop path\n");
                break;
            }

            in_frame_buf[byte_idx++] = c;
            DO_VERBOSE_TRACE("in_frame_buf[%d] [0x%02x]\n", (byte_idx - 1), c);

            DO_DEBUG_TRACE(" %02X",c);

        } else if (am_in_frame == OTHER_FRAME) {
            if ((c & 0xFF) == (ESCAPE_BYTE & 0xFF)) {
                in_escape = 1;
                add_byte(c,chan_ptr);
                DO_VERBOSE_TRACE("Add [0x%02x]\n", c);
                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec>timeout) {
                        break;
                    }
                    tempval = read_byte(port_num);
                } while (tempval < 0);
                if (tempval < 0) {
                    DO_VERBOSE_TRACE("Timeout in read_byte\n");
                    DO_VERBOSE_TRACE("Continuing...\n");
                    continue;
                }

                c = (uint8_t) tempval;
                add_byte(c,chan_ptr);
                DO_VERBOSE_TRACE("Add [0x%02x]\n", c);
                in_escape = 0;

            } else if ((c & 0xFF) == (END_FRAME_BYTE & 0xFF)) {
                add_byte(c,chan_ptr);
                DO_VERBOSE_TRACE("Add [0x%02x]\n", c);
                am_in_frame = UNFRAMED;
                DO_VERBOSE_TRACE("End frame byte\n");
                DO_VERBOSE_TRACE("Am in UNFRAMED\n");

                found_complete_frame = 1;
                break;

            } else {
                add_byte(c,chan_ptr);
                DO_VERBOSE_TRACE("Add [0x%02x]\n", c);
            }

            DO_DEBUG_TRACE("(%02d:%02X)",chan_ptr->channel,c);

            DO_VERBOSE_TRACE("Continuing...\n");
            continue;

        } else { //Unframed data

            DO_DEBUG_TRACE("(U:%02X)",c);
            add_byte(c,unframed_ptr);
            DO_VERBOSE_TRACE("Add [0x%02x] to unframed\n", c);
        }

    }

    if (found_complete_frame) {

        if (channel_ID == 0xff) {
            *receiveBuffer = other_frame_ID;
            *receiveBytes = chan_ptr->len;
            DO_VERBOSE_TRACE("Frame completed in 0xff mode\n");
        } else {
            extract_payload(&(in_frame_buf[FRAME_START_IDX]), (byte_idx - NUM_FRAMING_BYTES), receiveBuffer, receiveBytes);
        }

        return 0;
    } else {
        *receiveBytes =  0;
        return 0;
    }
}


void read_unframed(int32_t port_num, uint16_t start_byte_ms, uint32_t *receiveBytes, uint8_t *receiveBuffer){
    int tempval = 0;
    // frame_state am_in_frame = UNFRAMED;
    uint8_t c;
    // uint8_t failedcrc = 0;

    get_unframed(&unframed_ptr);

//    clock_t start_t,elapsed_t;
//  float elapsed_sec;
//  float timeout = (float)start_byte_ms/1000.0;
    *receiveBytes =  0;

    while(unframed_ptr->len > 0){

        if (*receiveBytes == FRAME_BUF_SIZ) return;

        tempval = get_byte(&c,unframed_ptr);
        if (tempval < 0){
            break;
        }

        receiveBuffer[(*receiveBytes)++] = c;

        DO_DEBUG_TRACE(" %02X",c);

    }
}

static int32_t create_frame(uint8_t *frame_buf, uint8_t channel_ID, uint8_t *payload, uint32_t payload_len)
{
    uint32_t i;
    int32_t out_len = 0;
    uint16_t crc_out = FLIR_CRC_INITIAL_VALUE;
    frame_buf[out_len++] = (uint8_t) START_FRAME_BYTE;
    frame_buf[out_len++] = (uint8_t) channel_ID;
    crc_out = ByteCRC16(channel_ID, (int) crc_out);
    // frame_buf[out_len++] = (uint8_t) 0x00;  // Removed Frame status byte[0]
    // crc_out = ByteCRC16(0x00, (int) crc_out);
    // frame_buf[out_len++] = (uint8_t) 0x00;  // Removed Frame status byte[1]
    // crc_out = ByteCRC16(0x00, (int) crc_out);

    if ((payload_len + 5) > FRAME_BUF_SIZ) // start + channel_ID + payload + crc_bytes[2] + end
        return (-1);

    for(i=0; i < payload_len; i++)
    {
        if ((payload[i] == START_FRAME_BYTE) || (payload[i] == END_FRAME_BYTE) || (payload[i] == ESCAPE_BYTE)){
            frame_buf[out_len++] = ESCAPE_BYTE;
            uint8_t c = payload[i];
            crc_out = ByteCRC16((int) c, (int) crc_out);
            switch (c)
            {
                case END_FRAME_BYTE:
                    c = ESCAPED_END_FRAME_BYTE;
                    break;
                case START_FRAME_BYTE:
                    c = ESCAPED_START_FRAME_BYTE;
                    break;
                case ESCAPE_BYTE:
                    c = ESCAPED_ESCAPE_BYTE;
                    break;
                default:
                    break;
            }
            frame_buf[out_len++] = c;

        }
        else
        {
            frame_buf[out_len++] = payload[i];
            crc_out = ByteCRC16((int) payload[i], (int) crc_out);
        }
        if ((out_len + 3) > FRAME_BUF_SIZ)
            return (-2);
    }

    // crc_out = calcFlirCRC16Bytes(out_len, frame_buf);
    uint8_t crcbyte = ((crc_out >> 8) & 0xFF);
    if ((crcbyte == START_FRAME_BYTE) || (crcbyte == END_FRAME_BYTE) || (crcbyte == ESCAPE_BYTE)) {
        frame_buf[out_len++] = ESCAPE_BYTE;
        uint8_t c = crcbyte;
        switch (c)
        {
            case END_FRAME_BYTE:
                c = ESCAPED_END_FRAME_BYTE;
                break;
            case START_FRAME_BYTE:
                c = ESCAPED_START_FRAME_BYTE;
                break;
            case ESCAPE_BYTE:
                c = ESCAPED_ESCAPE_BYTE;
                break;
            default:
                break;
        }
        frame_buf[out_len++] = c;
    }
    else
    {
        frame_buf[out_len++] = crcbyte;
    }

    crcbyte = (crc_out & 0xFF);
    if ((crcbyte == START_FRAME_BYTE) || (crcbyte == END_FRAME_BYTE) || (crcbyte == ESCAPE_BYTE)) {
        frame_buf[out_len++] = ESCAPE_BYTE;
        uint8_t c = crcbyte;
        switch (c)
        {
            case END_FRAME_BYTE:
                c = ESCAPED_END_FRAME_BYTE;
                break;
            case START_FRAME_BYTE:
                c = ESCAPED_START_FRAME_BYTE;
                break;
            case ESCAPE_BYTE:
                c = ESCAPED_ESCAPE_BYTE;
                break;
            default:
                break;
        }
        frame_buf[out_len++] = c;
    }
    else
    {
        frame_buf[out_len++] = crcbyte;
    }
    frame_buf[out_len++] = END_FRAME_BYTE;

    return(out_len);
}

// #define WRITE_BYTES
#ifdef WRITE_BYTES // use single byte writes
static int write_frame(int32_t port_num,uint8_t *frame_buf, uint32_t len)
{
    int i,success;

    DO_DEBUG_TRACE("Writing Frame (bytewise): ");

    for(i=0; i<len; i++){

        DO_DEBUG_TRACE(" %02X",frame_buf[i]);

        success = write_byte(port_num, frame_buf[i]);
    }

    DO_DEBUG_TRACE("...\n");

    return success;
}
#else // use frame writes
static int write_frame(int32_t port_num,uint8_t *frame_buf, uint32_t len)
{
    int i;

    DO_DEBUG_TRACE("Writing Frame (framewise): ");
    for(i=0; i<len; i++){
        DO_DEBUG_TRACE(" %02X",frame_buf[i]);
    }
    DO_DEBUG_TRACE("...\n");

    if (RS232_SendBuf(port_num, frame_buf, len) == len){

    DO_DEBUG_TRACE("Success.");

        return 0;
    } else {

    DO_DEBUG_TRACE("Failed.");

        return -1;
    }
}
#endif// WRITE_BYTES vs frame writes

                                        //, uint32_t *receiveBytes, uint8_t *receivePayload)
void send_to_camera(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload)
{
    int success=0;//, i=0;

    int32_t out_len;//, in_payload_len, out_payload_len;
    out_len = create_frame(out_frame_buf,channel_ID, sendPayload, sendBytes);

    DO_DEBUG_TRACE("sendBytes = %u, out_len = %d\n",sendBytes, out_len);

    success = write_frame(port_num,out_frame_buf, out_len);

    DO_DEBUG_TRACE("frame send status %d.\n",success);

}

