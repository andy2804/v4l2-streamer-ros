
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2015, FLIR Systems                                          */
/*  All rights reserved.                                                      */
/*                                                                            */
/*  This document is controlled to FLIR Technology Level 2. The information   */
/*  contained in this document pertains to a dual use product controlled for  */
/*  export by the Export Administration Regulations (EAR). Diversion contrary */
/*  to US law is prohibited. US Department of Commerce authorization is not   */
/*  required prior to export or transfer to foreign persons or parties unless */
/*  otherwise prohibited.                                                     */
/*                                                                            */
/******************************************************************************/

#include "UART_Connector.h"

static uint8_t isInitialized = 0;
static int myPort = 0;

/* Defaults to 1000ms, can be increased by the user for any commands that take
   longer to respond... */
static int readTimeout = 1000;

#ifdef _WIN32
#define FLR_IMPORT __declspec( dllimport )
#else
#define FLR_IMPORT
#endif

FLR_RESULT Initialize(int32_t port_num, int32_t baud_rate)
{
	if (isInitialized) return R_UART_PORT_ALREADY_OPEN;

	myPort = port_num;

	FLR_IMPORT uint8_t open_port(int32_t port_num, int32_t baud_rate);
	if (open_port(myPort, baud_rate)) return R_UART_PORT_FAILURE;

	isInitialized = 1;
	return FLR_COMM_OK; // 0 == success.
}

void Close()
{
	FLR_IMPORT void close_port(int32_t port_num);
	close_port((int32_t) myPort);
	isInitialized = 0;
	myPort = 0;
}

void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData)
{
	if (!isInitialized) return;

	FLR_IMPORT void send_to_camera(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);
	send_to_camera( (int32_t) myPort, channelID, sendBytes, sendData);
}


void ReadFrame(uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData)
{
	FLR_IMPORT void read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	read_frame((int32_t) myPort, channelID, readTimeout, receiveBytes, receiveData);
}


void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData)
{
	FLR_IMPORT void read_unframed(int32_t port_num, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	// hardcoded 25ms polling delay for now
	read_unframed((int32_t)myPort, 25, receiveBytes,receiveData);
}

void ReadTimeoutSet(unsigned int timeout)
{
	readTimeout = timeout;
}
