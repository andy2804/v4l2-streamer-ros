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

#ifndef UART_CONNECTOR_H
#define UART_CONNECTOR_H

#include <stdint.h>
#include "ReturnCodes.h"

#ifdef _WIN32
#define FLR_EXPORT __declspec(dllexport)
#else
#define FLR_EXPORT
#endif

FLR_EXPORT void ReadTimeoutSet(unsigned int timeout);
FLR_EXPORT void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData);
FLR_EXPORT void ReadFrame( uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData);
FLR_EXPORT void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData);
FLR_EXPORT FLR_RESULT Initialize(int32_t port_num, int32_t baud_rate);
FLR_EXPORT void Close(void);

#endif //UART_CONNECTOR_H
