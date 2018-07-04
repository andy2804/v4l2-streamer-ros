#ifndef UART_HALFDUPLEX_H
#define UART_HALFDUPLEX_H

#include <stdint.h>

#ifdef _WIN32
#define FLR_EXPORT __declspec(dllexport)
#else
#define FLR_EXPORT
#endif

FLR_EXPORT uint8_t open_port(int32_t port_num, int32_t baud_rate);
FLR_EXPORT void close_port(int32_t port_num);
FLR_EXPORT void send_to_camera(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);//, uint32_t *receiveBytes, uint8_t *receivePayload);
// FLR_EXPORT void read_command(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload, uint32_t *receiveBytes, uint8_t *receivePayload);
FLR_EXPORT int32_t read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
FLR_EXPORT void read_unframed(int32_t port_num, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);

#endif //UART_HALFDUPLEX_H
