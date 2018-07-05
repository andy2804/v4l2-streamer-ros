//  /////////////////////////////////////////////////////
//  // DO NOT EDIT.  This is a machine generated file. //
//  /////////////////////////////////////////////////////
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2016, FLIR Systems                                          */
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

#include "Client_Packager.h"

static uint32_t commandCount = 0;

// Begin Module: gao
FLR_RESULT CLIENT_pkgGaoSetGainState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetGainState()

FLR_RESULT CLIENT_pkgGaoGetGainState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetGainState()

FLR_RESULT CLIENT_pkgGaoSetFfcState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetFfcState()

FLR_RESULT CLIENT_pkgGaoGetFfcState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetFfcState()

FLR_RESULT CLIENT_pkgGaoSetTempCorrectionState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetTempCorrectionState()

FLR_RESULT CLIENT_pkgGaoGetTempCorrectionState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetTempCorrectionState()

FLR_RESULT CLIENT_pkgGaoSetIConstL(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetIConstL()

FLR_RESULT CLIENT_pkgGaoGetIConstL(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetIConstL()

FLR_RESULT CLIENT_pkgGaoSetIConstM(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetIConstM()

FLR_RESULT CLIENT_pkgGaoGetIConstM(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetIConstM()

FLR_RESULT CLIENT_pkgGaoSetAveragerState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetAveragerState()

FLR_RESULT CLIENT_pkgGaoGetAveragerState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetAveragerState()

FLR_RESULT CLIENT_pkgGaoSetNumFFCFrames(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetNumFFCFrames()

FLR_RESULT CLIENT_pkgGaoGetNumFFCFrames(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetNumFFCFrames()

FLR_RESULT CLIENT_pkgGaoGetAveragerThreshold(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetAveragerThreshold()

FLR_RESULT CLIENT_pkgGaoSetRnsState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsState()

FLR_RESULT CLIENT_pkgGaoGetRnsState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsState()

FLR_RESULT CLIENT_pkgGaoSetTestRampState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetTestRampState()

FLR_RESULT CLIENT_pkgGaoGetTestRampState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetTestRampState()

FLR_RESULT CLIENT_pkgGaoSetSffcState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETSFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetSffcState()

FLR_RESULT CLIENT_pkgGaoGetSffcState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETSFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetSffcState()

FLR_RESULT CLIENT_pkgGaoSetRpmState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRPMSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRpmState()

FLR_RESULT CLIENT_pkgGaoGetRpmState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRPMSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRpmState()

FLR_RESULT CLIENT_pkgGaoGetRpmThreshold(uint16_t *threshold) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRPMTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read threshold from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*threshold = (uint16_t)outVal;
		inPtr+=2;
	}// end of threshold handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRpmThreshold()

FLR_RESULT CLIENT_pkgGaoSetFfcZeroMeanState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETFFCZEROMEANSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetFfcZeroMeanState()

FLR_RESULT CLIENT_pkgGaoGetFfcZeroMeanState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETFFCZEROMEANSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetFfcZeroMeanState()

FLR_RESULT CLIENT_pkgGaoSetRnsPopThreshold(const uint16_t threshold) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write threshold to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = threshold;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSPOPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsPopThreshold()

FLR_RESULT CLIENT_pkgGaoGetRnsPopThreshold(uint16_t *threshold) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSPOPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read threshold from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*threshold = (uint16_t)outVal;
		inPtr+=2;
	}// end of threshold handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsPopThreshold()

FLR_RESULT CLIENT_pkgGaoSetRnsCloseThreshold(const uint16_t threshold) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write threshold to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = threshold;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSCLOSETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsCloseThreshold()

FLR_RESULT CLIENT_pkgGaoGetRnsCloseThreshold(uint16_t *threshold) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSCLOSETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read threshold from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*threshold = (uint16_t)outVal;
		inPtr+=2;
	}// end of threshold handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsCloseThreshold()

FLR_RESULT CLIENT_pkgGaoSetRnsTooFewQuit(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSTOOFEWQUIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsTooFewQuit()

FLR_RESULT CLIENT_pkgGaoGetRnsTooFewQuit(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSTOOFEWQUIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsTooFewQuit()

FLR_RESULT CLIENT_pkgGaoSetRnsTooFew(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSTOOFEW, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsTooFew()

FLR_RESULT CLIENT_pkgGaoGetRnsTooFew(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSTOOFEW, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsTooFew()

FLR_RESULT CLIENT_pkgGaoSetRnsMinCorrection(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSMINCORRECTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsMinCorrection()

FLR_RESULT CLIENT_pkgGaoGetRnsMinCorrection(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSMINCORRECTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsMinCorrection()

FLR_RESULT CLIENT_pkgGaoSetRnsDamping(const uint8_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = data;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsDamping()

FLR_RESULT CLIENT_pkgGaoGetRnsDamping(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsDamping()

FLR_RESULT CLIENT_pkgGaoSetRnsFrameHysteresis(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSFRAMEHYSTERESIS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsFrameHysteresis()

FLR_RESULT CLIENT_pkgGaoGetRnsFrameHysteresis(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSFRAMEHYSTERESIS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsFrameHysteresis()

FLR_RESULT CLIENT_pkgGaoSetRnsBadDamping(const uint8_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = data;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSBADDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsBadDamping()

FLR_RESULT CLIENT_pkgGaoGetRnsBadDamping(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSBADDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsBadDamping()

FLR_RESULT CLIENT_pkgGaoSetRnsNumGoodDampingThreshold(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSNUMGOODDAMPINGTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetRnsNumGoodDampingThreshold()

FLR_RESULT CLIENT_pkgGaoGetRnsNumGoodDampingThreshold(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSNUMGOODDAMPINGTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsNumGoodDampingThreshold()

FLR_RESULT CLIENT_pkgGaoGetRnsFfcDesired(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSFFCDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsFfcDesired()

// End Module: gao
// Begin Module: lagrange
// End Module: lagrange
// Begin Module: roic
FLR_RESULT CLIENT_pkgRoicGetFPATemp(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATemp()

FLR_RESULT CLIENT_pkgRoicGetFrameCount(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFrameCount()

FLR_RESULT CLIENT_pkgRoicGetActiveNormalizationTarget(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETACTIVENORMALIZATIONTARGET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetActiveNormalizationTarget()

FLR_RESULT CLIENT_pkgRoicSetFPARampState(const FLR_ENABLE_E state) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write state to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = state;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPARampState()

FLR_RESULT CLIENT_pkgRoicGetFPARampState(FLR_ENABLE_E *state) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read state from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*state = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of state handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPARampState()

FLR_RESULT CLIENT_pkgRoicGetSensorADC1(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC1, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetSensorADC1()

FLR_RESULT CLIENT_pkgRoicGetSensorADC2(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC2, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetSensorADC2()

FLR_RESULT CLIENT_pkgRoicSetFPATempOffset(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempOffset()

FLR_RESULT CLIENT_pkgRoicGetFPATempOffset(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempOffset()

FLR_RESULT CLIENT_pkgRoicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ROIC_TEMP_MODE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempMode()

FLR_RESULT CLIENT_pkgRoicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ROIC_TEMP_MODE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempMode()

FLR_RESULT CLIENT_pkgRoicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 64;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPTABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read table from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_ROIC_FPATEMP_TABLE_T outVal;
		byteToFLR_ROIC_FPATEMP_TABLE_T( (const uint8_t *) inPtr, &outVal);
		*table = (FLR_ROIC_FPATEMP_TABLE_T)outVal;
		inPtr+=64;
	}// end of table handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempTable()

FLR_RESULT CLIENT_pkgRoicSetFPATempValue(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempValue()

FLR_RESULT CLIENT_pkgRoicGetFPATempValue(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempValue()

// End Module: roic
// Begin Module: bpr
FLR_RESULT CLIENT_pkgBprSetState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBprSetState()

FLR_RESULT CLIENT_pkgBprGetState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBprGetState()

// End Module: bpr
// Begin Module: telemetry
FLR_RESULT CLIENT_pkgTelemetrySetState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetrySetState()

FLR_RESULT CLIENT_pkgTelemetryGetState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetryGetState()

FLR_RESULT CLIENT_pkgTelemetrySetLocation(const FLR_TELEMETRY_LOC_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TELEMETRY_LOC_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetrySetLocation()

FLR_RESULT CLIENT_pkgTelemetryGetLocation(FLR_TELEMETRY_LOC_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TELEMETRY_LOC_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetryGetLocation()

FLR_RESULT CLIENT_pkgTelemetrySetPacking(const FLR_TELEMETRY_PACKING_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TELEMETRY_PACKING_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETPACKING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetrySetPacking()

FLR_RESULT CLIENT_pkgTelemetryGetPacking(FLR_TELEMETRY_PACKING_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETPACKING, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TELEMETRY_PACKING_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetryGetPacking()

// End Module: telemetry
// Begin Module: boson
FLR_RESULT CLIENT_pkgBosonGetCameraSN(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERASN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCameraSN()

FLR_RESULT CLIENT_pkgBosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 20;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERAPN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_PARTNUMBER_T outVal;
		byteToFLR_BOSON_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_BOSON_PARTNUMBER_T)outVal;
		inPtr+=20;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCameraPN()

FLR_RESULT CLIENT_pkgBosonGetSensorSN(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORSN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSensorSN()

FLR_RESULT CLIENT_pkgBosonRunFFC() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RUNFFC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRunFFC()

FLR_RESULT CLIENT_pkgBosonSetFFCTempThreshold(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCTempThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCTempThreshold(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCTempThreshold()

FLR_RESULT CLIENT_pkgBosonSetFFCFrameThreshold(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCFrameThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCFrameThreshold(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCFrameThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCInProgress(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCINPROGRESS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCInProgress()

FLR_RESULT CLIENT_pkgBosonReboot() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_REBOOT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReboot()

FLR_RESULT CLIENT_pkgBosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ffcMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_FFCMODE_E inVal = ffcMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCMode()

FLR_RESULT CLIENT_pkgBosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*ffcMode = (FLR_BOSON_FFCMODE_E)outVal;
		inPtr+=4;
	}// end of ffcMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCMode()

FLR_RESULT CLIENT_pkgBosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write gainMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_GAINMODE_E inVal = gainMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetGainMode()

FLR_RESULT CLIENT_pkgBosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read gainMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*gainMode = (FLR_BOSON_GAINMODE_E)outVal;
		inPtr+=4;
	}// end of gainMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetGainMode()

FLR_RESULT CLIENT_pkgBosonWriteDynamicHeaderToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEDYNAMICHEADERTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteDynamicHeaderToFlash()

FLR_RESULT CLIENT_pkgBosonReadDynamicHeaderFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_READDYNAMICHEADERFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReadDynamicHeaderFromFlash()

FLR_RESULT CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYDEFAULTSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash()

FLR_RESULT CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYBADPIXELSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash()

FLR_RESULT CLIENT_pkgBosonWriteBadPixelsToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEBADPIXELSTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteBadPixelsToFlash()

FLR_RESULT CLIENT_pkgBosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSOFTWAREREV, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read major from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*major = (uint32_t)outVal;
		inPtr+=4;
	}// end of major handling
	
	// read minor from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*minor = (uint32_t)outVal;
		inPtr+=4;
	}// end of minor handling
	
	// read patch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*patch = (uint32_t)outVal;
		inPtr+=4;
	}// end of patch handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSoftwareRev()

FLR_RESULT CLIENT_pkgBosonSetBadPixelLocation(const uint32_t row, const uint32_t col) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write row to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = row;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write col to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = col;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETBADPIXELLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetBadPixelLocation()

FLR_RESULT CLIENT_pkgBosonlookupFPATempDegCx10(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGCX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonlookupFPATempDegCx10()

FLR_RESULT CLIENT_pkgBosonlookupFPATempDegKx10(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGKX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonlookupFPATempDegKx10()

FLR_RESULT CLIENT_pkgBosonWriteLensNvFfcToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITELENSNVFFCTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteLensNvFfcToFlash()

FLR_RESULT CLIENT_pkgBosonWriteLensGainToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITELENSGAINTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteLensGainToFlash()

FLR_RESULT CLIENT_pkgBosonSetLensNumber(const uint32_t lensNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write lensNumber to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = lensNumber;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetLensNumber()

FLR_RESULT CLIENT_pkgBosonGetLensNumber(uint32_t *lensNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read lensNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*lensNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of lensNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetLensNumber()

FLR_RESULT CLIENT_pkgBosonSetTableNumber(const uint32_t tableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write tableNumber to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = tableNumber;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetTableNumber()

FLR_RESULT CLIENT_pkgBosonGetTableNumber(uint32_t *tableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read tableNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*tableNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of tableNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetTableNumber()

FLR_RESULT CLIENT_pkgBosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 32;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORPN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sensorPN from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_SENSOR_PARTNUMBER_T outVal;
		byteToFLR_BOSON_SENSOR_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
		*sensorPN = (FLR_BOSON_SENSOR_PARTNUMBER_T)outVal;
		inPtr+=32;
	}// end of sensorPN handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSensorPN()

FLR_RESULT CLIENT_pkgBosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 16;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write parm_struct to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_GAIN_SWITCH_PARAMS_T *inVal = (const FLR_BOSON_GAIN_SWITCH_PARAMS_T *) &parm_struct;
		FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 16;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetGainSwitchParams()

FLR_RESULT CLIENT_pkgBosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 16;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read parm_struct from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_GAIN_SWITCH_PARAMS_T outVal;
		byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T( (const uint8_t *) inPtr, &outVal);
		*parm_struct = (FLR_BOSON_GAIN_SWITCH_PARAMS_T)outVal;
		inPtr+=16;
	}// end of parm_struct handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetGainSwitchParams()

FLR_RESULT CLIENT_pkgBosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOHIGHGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read switchToHighGainFlag from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*switchToHighGainFlag = (uint8_t)outVal;
		inPtr+=1;
	}// end of switchToHighGainFlag handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSwitchToHighGainFlag()

FLR_RESULT CLIENT_pkgBosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOLOWGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read switchToLowGainFlag from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*switchToLowGainFlag = (uint8_t)outVal;
		inPtr+=1;
	}// end of switchToLowGainFlag handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSwitchToLowGainFlag()

FLR_RESULT CLIENT_pkgBosonGetCLowToHighPercent(uint32_t *cLowToHighPercent) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCLOWTOHIGHPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read cLowToHighPercent from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*cLowToHighPercent = (uint32_t)outVal;
		inPtr+=4;
	}// end of cLowToHighPercent handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCLowToHighPercent()

FLR_RESULT CLIENT_pkgBosonGetMaxNUCTables(uint32_t *maxNUCTables) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMAXNUCTABLES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read maxNUCTables from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*maxNUCTables = (uint32_t)outVal;
		inPtr+=4;
	}// end of maxNUCTables handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetMaxNUCTables()

FLR_RESULT CLIENT_pkgBosonGetMaxLensTables(uint32_t *maxLensTables) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMAXLENSTABLES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read maxLensTables from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*maxLensTables = (uint32_t)outVal;
		inPtr+=4;
	}// end of maxLensTables handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetMaxLensTables()

FLR_RESULT CLIENT_pkgBosonGetFfcWaitCloseFrames(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFfcWaitCloseFrames()

FLR_RESULT CLIENT_pkgBosonSetFfcWaitCloseFrames(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFfcWaitCloseFrames()

FLR_RESULT CLIENT_pkgBosonCheckForTableSwitch() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_CHECKFORTABLESWITCH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonCheckForTableSwitch()

FLR_RESULT CLIENT_pkgBosonGetDesiredTableNumber(uint32_t *desiredTableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETDESIREDTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read desiredTableNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*desiredTableNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of desiredTableNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetDesiredTableNumber()

FLR_RESULT CLIENT_pkgBosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCSTATUS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcStatus from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*ffcStatus = (FLR_BOSON_FFCSTATUS_E)outVal;
		inPtr+=4;
	}// end of ffcStatus handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFfcStatus()

FLR_RESULT CLIENT_pkgBosonGetFfcDesired(uint32_t *ffcDesired) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcDesired from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*ffcDesired = (uint32_t)outVal;
		inPtr+=4;
	}// end of ffcDesired handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFfcDesired()

FLR_RESULT CLIENT_pkgBosonGetLastFFCFrameCount(uint32_t *frameCount) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLASTFFCFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read frameCount from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*frameCount = (uint32_t)outVal;
		inPtr+=4;
	}// end of frameCount handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetLastFFCFrameCount()

FLR_RESULT CLIENT_pkgBosonGetLastFFCTempDegKx10(uint16_t *temp) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLASTFFCTEMPDEGKX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read temp from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*temp = (uint16_t)outVal;
		inPtr+=2;
	}// end of temp handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetLastFFCTempDegKx10()

FLR_RESULT CLIENT_pkgBosonGetTableSwitchDesired(uint16_t *tableSwitchDesired) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTABLESWITCHDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read tableSwitchDesired from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*tableSwitchDesired = (uint16_t)outVal;
		inPtr+=2;
	}// end of tableSwitchDesired handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetTableSwitchDesired()

FLR_RESULT CLIENT_pkgBosonGetOverTempThreshold(float *temperatureInC) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read temperatureInC from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*temperatureInC = (float)outVal;
		inPtr+=4;
	}// end of temperatureInC handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetOverTempThreshold()

FLR_RESULT CLIENT_pkgBosonGetLowPowerMode(uint16_t *lowPowerMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLOWPOWERMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read lowPowerMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*lowPowerMode = (uint16_t)outVal;
		inPtr+=2;
	}// end of lowPowerMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetLowPowerMode()

FLR_RESULT CLIENT_pkgBosonGetOverTempEventOccurred(uint16_t *overTempEventOccurred) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPEVENTOCCURRED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read overTempEventOccurred from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*overTempEventOccurred = (uint16_t)outVal;
		inPtr+=2;
	}// end of overTempEventOccurred handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetOverTempEventOccurred()

FLR_RESULT CLIENT_pkgBosonSetPermitThermalShutdownOverride(const FLR_ENABLE_E permitThermalShutdownOverride) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write permitThermalShutdownOverride to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = permitThermalShutdownOverride;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETPERMITTHERMALSHUTDOWNOVERRIDE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetPermitThermalShutdownOverride()

FLR_RESULT CLIENT_pkgBosonGetPermitThermalShutdownOverride(FLR_ENABLE_E *permitThermalShutdownOverride) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETPERMITTHERMALSHUTDOWNOVERRIDE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read permitThermalShutdownOverride from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*permitThermalShutdownOverride = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of permitThermalShutdownOverride handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetPermitThermalShutdownOverride()

FLR_RESULT CLIENT_pkgBosonGetMyriadTemp(float *myriadTemp) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMYRIADTEMP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read myriadTemp from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*myriadTemp = (float)outVal;
		inPtr+=4;
	}// end of myriadTemp handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetMyriadTemp()

FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens0(int32_t *nvFFCNucTableNumberLens0) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCNUCTABLENUMBERLENS0, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read nvFFCNucTableNumberLens0 from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*nvFFCNucTableNumberLens0 = (int32_t)outVal;
		inPtr+=4;
	}// end of nvFFCNucTableNumberLens0 handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetNvFFCNucTableNumberLens0()

FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens1(int32_t *nvFFCNucTableNumberLens1) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCNUCTABLENUMBERLENS1, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read nvFFCNucTableNumberLens1 from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*nvFFCNucTableNumberLens1 = (int32_t)outVal;
		inPtr+=4;
	}// end of nvFFCNucTableNumberLens1 handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetNvFFCNucTableNumberLens1()

FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0(uint16_t *nvFFCFPATempDegKx10Lens0) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCFPATEMPDEGKX10LENS0, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read nvFFCFPATempDegKx10Lens0 from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*nvFFCFPATempDegKx10Lens0 = (uint16_t)outVal;
		inPtr+=2;
	}// end of nvFFCFPATempDegKx10Lens0 handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0()

FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1(uint16_t *nvFFCFPATempDegKx10Lens1) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCFPATEMPDEGKX10LENS1, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read nvFFCFPATempDegKx10Lens1 from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*nvFFCFPATempDegKx10Lens1 = (uint16_t)outVal;
		inPtr+=2;
	}// end of nvFFCFPATempDegKx10Lens1 handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1()

FLR_RESULT CLIENT_pkgBosonSetFFCWarnTimeInSecx10(const uint16_t ffcWarnTime) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ffcWarnTime to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = ffcWarnTime;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWARNTIMEINSECX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCWarnTimeInSecx10()

FLR_RESULT CLIENT_pkgBosonGetFFCWarnTimeInSecx10(uint16_t *ffcWarnTime) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWARNTIMEINSECX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcWarnTime from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*ffcWarnTime = (uint16_t)outVal;
		inPtr+=2;
	}// end of ffcWarnTime handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCWarnTimeInSecx10()

FLR_RESULT CLIENT_pkgBosonGetOverTempEventCounter(uint32_t *overTempEventCounter) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPEVENTCOUNTER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read overTempEventCounter from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*overTempEventCounter = (uint32_t)outVal;
		inPtr+=4;
	}// end of overTempEventCounter handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetOverTempEventCounter()

FLR_RESULT CLIENT_pkgBosonSetOverTempTimerInSec(const uint16_t overTempTimerInSec) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write overTempTimerInSec to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = overTempTimerInSec;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETOVERTEMPTIMERINSEC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetOverTempTimerInSec()

FLR_RESULT CLIENT_pkgBosonGetOverTempTimerInSec(uint16_t *overTempTimerInSec) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPTIMERINSEC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read overTempTimerInSec from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*overTempTimerInSec = (uint16_t)outVal;
		inPtr+=2;
	}// end of overTempTimerInSec handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetOverTempTimerInSec()

FLR_RESULT CLIENT_pkgBosonUnloadCurrentLensCorrections() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_UNLOADCURRENTLENSCORRECTIONS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonUnloadCurrentLensCorrections()

FLR_RESULT CLIENT_pkgBosonSetTimeForQuickFFCsInSecs(const uint32_t timeForQuickFFCsInSecs) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write timeForQuickFFCsInSecs to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = timeForQuickFFCsInSecs;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETTIMEFORQUICKFFCSINSECS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetTimeForQuickFFCsInSecs()

FLR_RESULT CLIENT_pkgBosonGetTimeForQuickFFCsInSecs(uint32_t *timeForQuickFFCsInSecs) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTIMEFORQUICKFFCSINSECS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read timeForQuickFFCsInSecs from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*timeForQuickFFCsInSecs = (uint32_t)outVal;
		inPtr+=4;
	}// end of timeForQuickFFCsInSecs handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetTimeForQuickFFCsInSecs()

FLR_RESULT CLIENT_pkgBosonReloadCurrentLensCorrections() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RELOADCURRENTLENSCORRECTIONS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReloadCurrentLensCorrections()

FLR_RESULT CLIENT_pkgBosonGetBootTimestamps(float *FirstLight, float *StartInit, float *BosonExecDone, float *Timestamp4) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 16;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETBOOTTIMESTAMPS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read FirstLight from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*FirstLight = (float)outVal;
		inPtr+=4;
	}// end of FirstLight handling
	
	// read StartInit from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*StartInit = (float)outVal;
		inPtr+=4;
	}// end of StartInit handling
	
	// read BosonExecDone from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*BosonExecDone = (float)outVal;
		inPtr+=4;
	}// end of BosonExecDone handling
	
	// read Timestamp4 from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*Timestamp4 = (float)outVal;
		inPtr+=4;
	}// end of Timestamp4 handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetBootTimestamps()

FLR_RESULT CLIENT_pkgBosonSetExtSyncMode(const FLR_BOSON_EXT_SYNC_MODE_E mode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write mode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_EXT_SYNC_MODE_E inVal = mode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETEXTSYNCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetExtSyncMode()

FLR_RESULT CLIENT_pkgBosonGetExtSyncMode(FLR_BOSON_EXT_SYNC_MODE_E *mode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETEXTSYNCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read mode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*mode = (FLR_BOSON_EXT_SYNC_MODE_E)outVal;
		inPtr+=4;
	}// end of mode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetExtSyncMode()

FLR_RESULT CLIENT_pkgBosonGetSensorHostCalVersion(uint32_t *version) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORHOSTCALVERSION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read version from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*version = (uint32_t)outVal;
		inPtr+=4;
	}// end of version handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSensorHostCalVersion()

// End Module: boson
// Begin Module: dvo
FLR_RESULT CLIENT_pkgDvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write analogVideoState to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = analogVideoState;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetAnalogVideoState()

FLR_RESULT CLIENT_pkgDvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read analogVideoState from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*analogVideoState = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of analogVideoState handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetAnalogVideoState()

FLR_RESULT CLIENT_pkgDvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write format to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_OUTPUT_FORMAT_E inVal = format;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputFormat()

FLR_RESULT CLIENT_pkgDvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read format from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*format = (FLR_DVO_OUTPUT_FORMAT_E)outVal;
		inPtr+=4;
	}// end of format handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputFormat()

FLR_RESULT CLIENT_pkgDvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 12;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write settings to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_YCBCR_SETTINGS_T *inVal = (const FLR_DVO_YCBCR_SETTINGS_T *) &settings;
		FLR_DVO_YCBCR_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 12;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputYCbCrSettings()

FLR_RESULT CLIENT_pkgDvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read settings from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_DVO_YCBCR_SETTINGS_T outVal;
		byteToFLR_DVO_YCBCR_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*settings = (FLR_DVO_YCBCR_SETTINGS_T)outVal;
		inPtr+=12;
	}// end of settings handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputYCbCrSettings()

FLR_RESULT CLIENT_pkgDvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write settings to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_RGB_SETTINGS_T *inVal = (const FLR_DVO_RGB_SETTINGS_T *) &settings;
		FLR_DVO_RGB_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 8;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputRGBSettings()

FLR_RESULT CLIENT_pkgDvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read settings from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_DVO_RGB_SETTINGS_T outVal;
		byteToFLR_DVO_RGB_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*settings = (FLR_DVO_RGB_SETTINGS_T)outVal;
		inPtr+=8;
	}// end of settings handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputRGBSettings()

FLR_RESULT CLIENT_pkgDvoApplyCustomSettings() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_APPLYCUSTOMSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoApplyCustomSettings()

FLR_RESULT CLIENT_pkgDvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write displayMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_DISPLAY_MODE_E inVal = displayMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetDisplayMode()

FLR_RESULT CLIENT_pkgDvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read displayMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*displayMode = (FLR_DVO_DISPLAY_MODE_E)outVal;
		inPtr+=4;
	}// end of displayMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetDisplayMode()

FLR_RESULT CLIENT_pkgDvoSetType(const FLR_DVO_TYPE_E tap) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write tap to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_TYPE_E inVal = tap;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetType()

FLR_RESULT CLIENT_pkgDvoGetType(FLR_DVO_TYPE_E *tap) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read tap from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*tap = (FLR_DVO_TYPE_E)outVal;
		inPtr+=4;
	}// end of tap handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetType()

FLR_RESULT CLIENT_pkgDvoSetVideoStandard(const FLR_DVO_VIDEO_STANDARD_E videoStandard) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write videoStandard to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_VIDEO_STANDARD_E inVal = videoStandard;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETVIDEOSTANDARD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetVideoStandard()

FLR_RESULT CLIENT_pkgDvoGetVideoStandard(FLR_DVO_VIDEO_STANDARD_E *videoStandard) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETVIDEOSTANDARD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read videoStandard from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*videoStandard = (FLR_DVO_VIDEO_STANDARD_E)outVal;
		inPtr+=4;
	}// end of videoStandard handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetVideoStandard()

FLR_RESULT CLIENT_pkgDvoSetCheckVideoDacPresent(const FLR_ENABLE_E checkVideoDacPresent) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write checkVideoDacPresent to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = checkVideoDacPresent;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETCHECKVIDEODACPRESENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetCheckVideoDacPresent()

FLR_RESULT CLIENT_pkgDvoGetCheckVideoDacPresent(FLR_ENABLE_E *checkVideoDacPresent) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETCHECKVIDEODACPRESENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read checkVideoDacPresent from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*checkVideoDacPresent = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of checkVideoDacPresent handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetCheckVideoDacPresent()

FLR_RESULT CLIENT_pkgDvoGetClockInfo(uint32_t *horizontalSyncWidth, uint32_t *verticalSyncWidth, uint32_t *clocksPerRowPeriod, uint32_t *horizontalFrontPorch, uint32_t *horizontalBackPorch, uint32_t *frontTelemetryPixels, uint32_t *rearTelemetryPixels, uint32_t *videoColumns, uint32_t *validColumns, uint32_t *telemetryRows, uint32_t *videoRows, uint32_t *validRows, uint32_t *verticalFrontPorch, uint32_t *verticalBackPorch, uint32_t *rowPeriodsPerFrame, uint32_t *clocksPerFrame, float *clockRateInMHz, float *frameRateInHz, uint32_t *validOnRisingEdge, uint32_t *dataWidthInBits) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 80;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETCLOCKINFO, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read horizontalSyncWidth from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*horizontalSyncWidth = (uint32_t)outVal;
		inPtr+=4;
	}// end of horizontalSyncWidth handling
	
	// read verticalSyncWidth from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*verticalSyncWidth = (uint32_t)outVal;
		inPtr+=4;
	}// end of verticalSyncWidth handling
	
	// read clocksPerRowPeriod from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*clocksPerRowPeriod = (uint32_t)outVal;
		inPtr+=4;
	}// end of clocksPerRowPeriod handling
	
	// read horizontalFrontPorch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*horizontalFrontPorch = (uint32_t)outVal;
		inPtr+=4;
	}// end of horizontalFrontPorch handling
	
	// read horizontalBackPorch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*horizontalBackPorch = (uint32_t)outVal;
		inPtr+=4;
	}// end of horizontalBackPorch handling
	
	// read frontTelemetryPixels from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*frontTelemetryPixels = (uint32_t)outVal;
		inPtr+=4;
	}// end of frontTelemetryPixels handling
	
	// read rearTelemetryPixels from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*rearTelemetryPixels = (uint32_t)outVal;
		inPtr+=4;
	}// end of rearTelemetryPixels handling
	
	// read videoColumns from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*videoColumns = (uint32_t)outVal;
		inPtr+=4;
	}// end of videoColumns handling
	
	// read validColumns from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*validColumns = (uint32_t)outVal;
		inPtr+=4;
	}// end of validColumns handling
	
	// read telemetryRows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*telemetryRows = (uint32_t)outVal;
		inPtr+=4;
	}// end of telemetryRows handling
	
	// read videoRows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*videoRows = (uint32_t)outVal;
		inPtr+=4;
	}// end of videoRows handling
	
	// read validRows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*validRows = (uint32_t)outVal;
		inPtr+=4;
	}// end of validRows handling
	
	// read verticalFrontPorch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*verticalFrontPorch = (uint32_t)outVal;
		inPtr+=4;
	}// end of verticalFrontPorch handling
	
	// read verticalBackPorch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*verticalBackPorch = (uint32_t)outVal;
		inPtr+=4;
	}// end of verticalBackPorch handling
	
	// read rowPeriodsPerFrame from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*rowPeriodsPerFrame = (uint32_t)outVal;
		inPtr+=4;
	}// end of rowPeriodsPerFrame handling
	
	// read clocksPerFrame from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*clocksPerFrame = (uint32_t)outVal;
		inPtr+=4;
	}// end of clocksPerFrame handling
	
	// read clockRateInMHz from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*clockRateInMHz = (float)outVal;
		inPtr+=4;
	}// end of clockRateInMHz handling
	
	// read frameRateInHz from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*frameRateInHz = (float)outVal;
		inPtr+=4;
	}// end of frameRateInHz handling
	
	// read validOnRisingEdge from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*validOnRisingEdge = (uint32_t)outVal;
		inPtr+=4;
	}// end of validOnRisingEdge handling
	
	// read dataWidthInBits from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*dataWidthInBits = (uint32_t)outVal;
		inPtr+=4;
	}// end of dataWidthInBits handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetClockInfo()

// End Module: dvo
// Begin Module: capture
FLR_RESULT CLIENT_pkgCaptureSingleFrame() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAME, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureSingleFrame()

FLR_RESULT CLIENT_pkgCaptureFrames(const FLR_CAPTURE_SETTINGS_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 10;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_CAPTURE_SETTINGS_T *inVal = (const FLR_CAPTURE_SETTINGS_T *) &data;
		FLR_CAPTURE_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 10;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_FRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureFrames()

FLR_RESULT CLIENT_pkgCaptureSingleFrameWithSrc(const FLR_CAPTURE_SRC_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_CAPTURE_SRC_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAMEWITHSRC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureSingleFrameWithSrc()

FLR_RESULT CLIENT_pkgCaptureSingleFrameToFile() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAMETOFILE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureSingleFrameToFile()

// End Module: capture
// Begin Module: scnr
FLR_RESULT CLIENT_pkgScnrSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetEnableState()

FLR_RESULT CLIENT_pkgScnrGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetEnableState()

FLR_RESULT CLIENT_pkgScnrSetThColSum(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThColSum()

FLR_RESULT CLIENT_pkgScnrGetThColSum(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThColSum()

FLR_RESULT CLIENT_pkgScnrSetThPixel(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThPixel()

FLR_RESULT CLIENT_pkgScnrGetThPixel(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThPixel()

FLR_RESULT CLIENT_pkgScnrSetMaxCorr(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetMaxCorr()

FLR_RESULT CLIENT_pkgScnrGetMaxCorr(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetMaxCorr()

FLR_RESULT CLIENT_pkgScnrGetThPixelApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXELAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThPixelApplied()

FLR_RESULT CLIENT_pkgScnrGetMaxCorrApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORRAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetMaxCorrApplied()

FLR_RESULT CLIENT_pkgScnrSetThColSumSafe(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHCOLSUMSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThColSumSafe()

FLR_RESULT CLIENT_pkgScnrGetThColSumSafe(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHCOLSUMSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThColSumSafe()

FLR_RESULT CLIENT_pkgScnrSetThPixelSafe(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHPIXELSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThPixelSafe()

FLR_RESULT CLIENT_pkgScnrGetThPixelSafe(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXELSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThPixelSafe()

FLR_RESULT CLIENT_pkgScnrSetMaxCorrSafe(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETMAXCORRSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetMaxCorrSafe()

FLR_RESULT CLIENT_pkgScnrGetMaxCorrSafe(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORRSAFE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetMaxCorrSafe()

// End Module: scnr
// Begin Module: agc
FLR_RESULT CLIENT_pkgAgcSetPercentPerBin(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetPercentPerBin()

FLR_RESULT CLIENT_pkgAgcGetPercentPerBin(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetPercentPerBin()

FLR_RESULT CLIENT_pkgAgcSetLinearPercent(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetLinearPercent()

FLR_RESULT CLIENT_pkgAgcGetLinearPercent(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetLinearPercent()

FLR_RESULT CLIENT_pkgAgcSetOutlierCut(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetOutlierCut()

FLR_RESULT CLIENT_pkgAgcGetOutlierCut(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetOutlierCut()

FLR_RESULT CLIENT_pkgAgcGetDrOut(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDROUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetDrOut()

FLR_RESULT CLIENT_pkgAgcSetMaxGain(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetMaxGain()

FLR_RESULT CLIENT_pkgAgcGetMaxGain(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetMaxGain()

FLR_RESULT CLIENT_pkgAgcSetdf(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetdf()

FLR_RESULT CLIENT_pkgAgcGetdf(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetdf()

FLR_RESULT CLIENT_pkgAgcSetGamma(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetGamma()

FLR_RESULT CLIENT_pkgAgcGetGamma(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetGamma()

FLR_RESULT CLIENT_pkgAgcGetFirstBin(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETFIRSTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetFirstBin()

FLR_RESULT CLIENT_pkgAgcGetLastBin(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLASTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetLastBin()

FLR_RESULT CLIENT_pkgAgcSetDetailHeadroom(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetDetailHeadroom()

FLR_RESULT CLIENT_pkgAgcGetDetailHeadroom(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetDetailHeadroom()

FLR_RESULT CLIENT_pkgAgcSetd2br(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetd2br()

FLR_RESULT CLIENT_pkgAgcGetd2br(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetd2br()

FLR_RESULT CLIENT_pkgAgcSetSigmaR(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetSigmaR()

FLR_RESULT CLIENT_pkgAgcGetSigmaR(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetSigmaR()

FLR_RESULT CLIENT_pkgAgcSetUseEntropy(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetUseEntropy()

FLR_RESULT CLIENT_pkgAgcGetUseEntropy(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetUseEntropy()

FLR_RESULT CLIENT_pkgAgcSetROI(const FLR_ROI_T roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write roi to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ROI_T *inVal = (const FLR_ROI_T *) &roi;
		FLR_ROI_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 8;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetROI()

FLR_RESULT CLIENT_pkgAgcGetROI(FLR_ROI_T *roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read roi from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_ROI_T outVal;
		byteToFLR_ROI_T( (const uint8_t *) inPtr, &outVal);
		*roi = (FLR_ROI_T)outVal;
		inPtr+=8;
	}// end of roi handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetROI()

FLR_RESULT CLIENT_pkgAgcGetMaxGainApplied(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAINAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetMaxGainApplied()

FLR_RESULT CLIENT_pkgAgcGetSigmaRApplied(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMARAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetSigmaRApplied()

FLR_RESULT CLIENT_pkgAgcSetOutlierCutBalance(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETOUTLIERCUTBALANCE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetOutlierCutBalance()

FLR_RESULT CLIENT_pkgAgcGetOutlierCutBalance(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUTBALANCE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetOutlierCutBalance()

FLR_RESULT CLIENT_pkgAgcGetOutlierCutApplied(float *percentHigh, float *percentLow) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUTAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read percentHigh from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*percentHigh = (float)outVal;
		inPtr+=4;
	}// end of percentHigh handling
	
	// read percentLow from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*percentLow = (float)outVal;
		inPtr+=4;
	}// end of percentLow handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetOutlierCutApplied()

// End Module: agc
// Begin Module: tf
FLR_RESULT CLIENT_pkgTfSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetEnableState()

FLR_RESULT CLIENT_pkgTfGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetEnableState()

FLR_RESULT CLIENT_pkgTfSetDelta_nf(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetDelta_nf()

FLR_RESULT CLIENT_pkgTfGetDelta_nf(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetDelta_nf()

FLR_RESULT CLIENT_pkgTfSetTHDeltaMotion(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetTHDeltaMotion()

FLR_RESULT CLIENT_pkgTfGetTHDeltaMotion(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetTHDeltaMotion()

FLR_RESULT CLIENT_pkgTfSetWLut(const FLR_TF_WLUT_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 32;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_WLUT_T *inVal = (const FLR_TF_WLUT_T *) &data;
		FLR_TF_WLUT_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 32;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetWLut()

FLR_RESULT CLIENT_pkgTfGetWLut(FLR_TF_WLUT_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 32;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TF_WLUT_T outVal;
		byteToFLR_TF_WLUT_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_WLUT_T)outVal;
		inPtr+=32;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetWLut()

FLR_RESULT CLIENT_pkgTfGetMotionCount(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionCount()

FLR_RESULT CLIENT_pkgTfSetMotionThreshold(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionThreshold()

FLR_RESULT CLIENT_pkgTfGetMotionThreshold(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionThreshold()

FLR_RESULT CLIENT_pkgTfGetDelta_nfApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetDelta_nfApplied()

FLR_RESULT CLIENT_pkgTfGetTHDeltaMotionApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTIONAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetTHDeltaMotionApplied()

// End Module: tf
// Begin Module: mem
FLR_RESULT CLIENT_pkgMemReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 7;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 65536;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write bufferNum to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = bufferNum;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCAPTURE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
		inPtr+=sizeInBytes;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemReadCapture()

FLR_RESULT CLIENT_pkgMemGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETCAPTURESIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read bytes from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*bytes = (uint32_t)outVal;
		inPtr+=4;
	}// end of bytes handling
	
	// read rows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*rows = (uint16_t)outVal;
		inPtr+=2;
	}// end of rows handling
	
	// read columns from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*columns = (uint16_t)outVal;
		inPtr+=2;
	}// end of columns handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemGetCaptureSize()

FLR_RESULT CLIENT_pkgMemWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = (uint32_t) sizeInBytes + 11;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		UCHARArrayToByte(data,sizeInBytes,(const uint8_t *) outPtr);
		outPtr += sizeInBytes;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_WRITEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemWriteFlash()

FLR_RESULT CLIENT_pkgMemReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 11;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
		inPtr+=sizeInBytes;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemReadFlash()

FLR_RESULT CLIENT_pkgMemGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETFLASHSIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read bytes from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*bytes = (uint32_t)outVal;
		inPtr+=4;
	}// end of bytes handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemGetFlashSize()

FLR_RESULT CLIENT_pkgMemEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemEraseFlash()

FLR_RESULT CLIENT_pkgMemEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write length to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = length;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASHPARTIAL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemEraseFlashPartial()

FLR_RESULT CLIENT_pkgMemReadCurrentGain(const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 6;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCURRENTGAIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
		inPtr+=sizeInBytes;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemReadCurrentGain()

FLR_RESULT CLIENT_pkgMemGetGainSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETGAINSIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read bytes from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*bytes = (uint32_t)outVal;
		inPtr+=4;
	}// end of bytes handling
	
	// read rows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*rows = (uint16_t)outVal;
		inPtr+=2;
	}// end of rows handling
	
	// read columns from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*columns = (uint16_t)outVal;
		inPtr+=2;
	}// end of columns handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemGetGainSize()

// End Module: mem
// Begin Module: colorLut
FLR_RESULT CLIENT_pkgColorlutSetControl(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutSetControl()

FLR_RESULT CLIENT_pkgColorlutGetControl(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutGetControl()

FLR_RESULT CLIENT_pkgColorlutSetId(const FLR_COLORLUT_ID_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_COLORLUT_ID_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutSetId()

FLR_RESULT CLIENT_pkgColorlutGetId(FLR_COLORLUT_ID_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_COLORLUT_ID_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutGetId()

// End Module: colorLut
// Begin Module: spnr
FLR_RESULT CLIENT_pkgSpnrSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetEnableState()

FLR_RESULT CLIENT_pkgSpnrGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetEnableState()

FLR_RESULT CLIENT_pkgSpnrGetState(FLR_SPNR_STATE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_SPNR_STATE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetState()

FLR_RESULT CLIENT_pkgSpnrSetFrameDelay(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETFRAMEDELAY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetFrameDelay()

FLR_RESULT CLIENT_pkgSpnrGetFrameDelay(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETFRAMEDELAY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetFrameDelay()

FLR_RESULT CLIENT_pkgSpnrGetSFApplied(float *sf) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sf from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sf = (float)outVal;
		inPtr+=4;
	}// end of sf handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetSFApplied()

FLR_RESULT CLIENT_pkgSpnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 256;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SPNR_PSD_KERNEL_T *inVal = (const FLR_SPNR_PSD_KERNEL_T *) &data;
		FLR_SPNR_PSD_KERNEL_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 256;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetPSDKernel()

FLR_RESULT CLIENT_pkgSpnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_SPNR_PSD_KERNEL_T outVal;
		byteToFLR_SPNR_PSD_KERNEL_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_SPNR_PSD_KERNEL_T)outVal;
		inPtr+=256;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetPSDKernel()

FLR_RESULT CLIENT_pkgSpnrSetSFMin(const float sfmin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write sfmin to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = sfmin;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETSFMIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetSFMin()

FLR_RESULT CLIENT_pkgSpnrGetSFMin(float *sfmin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFMIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sfmin from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sfmin = (float)outVal;
		inPtr+=4;
	}// end of sfmin handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetSFMin()

FLR_RESULT CLIENT_pkgSpnrSetSFMax(const float sfmax) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write sfmax to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = sfmax;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETSFMAX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetSFMax()

FLR_RESULT CLIENT_pkgSpnrGetSFMax(float *sfmax) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFMAX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sfmax from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sfmax = (float)outVal;
		inPtr+=4;
	}// end of sfmax handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetSFMax()

FLR_RESULT CLIENT_pkgSpnrSetDFMin(const float dfmin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write dfmin to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = dfmin;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETDFMIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetDFMin()

FLR_RESULT CLIENT_pkgSpnrGetDFMin(float *dfmin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETDFMIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read dfmin from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*dfmin = (float)outVal;
		inPtr+=4;
	}// end of dfmin handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetDFMin()

FLR_RESULT CLIENT_pkgSpnrSetDFMax(const float dfmax) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write dfmax to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = dfmax;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETDFMAX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetDFMax()

FLR_RESULT CLIENT_pkgSpnrGetDFMax(float *dfmax) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETDFMAX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read dfmax from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*dfmax = (float)outVal;
		inPtr+=4;
	}// end of dfmax handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetDFMax()

FLR_RESULT CLIENT_pkgSpnrSetNormTarget(const float normTarget) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write normTarget to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = normTarget;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETNORMTARGET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetNormTarget()

FLR_RESULT CLIENT_pkgSpnrGetNormTarget(float *normTarget) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETNORMTARGET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read normTarget from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*normTarget = (float)outVal;
		inPtr+=4;
	}// end of normTarget handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetNormTarget()

FLR_RESULT CLIENT_pkgSpnrGetNormTargetApplied(float *normTargetApplied) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETNORMTARGETAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read normTargetApplied from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*normTargetApplied = (float)outVal;
		inPtr+=4;
	}// end of normTargetApplied handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetNormTargetApplied()

// End Module: spnr
// Begin Module: scaler
FLR_RESULT CLIENT_pkgScalerGetMaxZoom(uint32_t *zoom) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETMAXZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read zoom from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*zoom = (uint32_t)outVal;
		inPtr+=4;
	}// end of zoom handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerGetMaxZoom()

FLR_RESULT CLIENT_pkgScalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 12;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write zoomParams to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SCALER_ZOOM_PARAMS_T *inVal = (const FLR_SCALER_ZOOM_PARAMS_T *) &zoomParams;
		FLR_SCALER_ZOOM_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 12;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerSetZoom()

FLR_RESULT CLIENT_pkgScalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read zoomParams from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_SCALER_ZOOM_PARAMS_T outVal;
		byteToFLR_SCALER_ZOOM_PARAMS_T( (const uint8_t *) inPtr, &outVal);
		*zoomParams = (FLR_SCALER_ZOOM_PARAMS_T)outVal;
		inPtr+=12;
	}// end of zoomParams handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerGetZoom()

FLR_RESULT CLIENT_pkgScalerSetFractionalZoom(const uint32_t zoomNumerator, const uint32_t zoomDenominator, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 32;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write zoomNumerator to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomNumerator;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomDenominator to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomDenominator;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomXCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomXCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomYCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomYCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write inChangeEnable to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = inChangeEnable;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomOutXCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomOutXCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomOutYCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomOutYCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write outChangeEnable to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = outChangeEnable;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETFRACTIONALZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerSetFractionalZoom()

FLR_RESULT CLIENT_pkgScalerSetIndexZoom(const uint32_t zoomIndex, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 28;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write zoomIndex to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomIndex;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomXCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomXCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomYCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomYCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write inChangeEnable to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = inChangeEnable;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomOutXCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomOutXCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write zoomOutYCenter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = zoomOutYCenter;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write outChangeEnable to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = outChangeEnable;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETINDEXZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerSetIndexZoom()

// End Module: scaler
// Begin Module: sysctrl
FLR_RESULT CLIENT_pkgSysctrlSetFreezeState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_SETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlSetFreezeState()

FLR_RESULT CLIENT_pkgSysctrlGetFreezeState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlGetFreezeState()

FLR_RESULT CLIENT_pkgSysctrlGetCameraFrameRate(uint32_t *frameRate) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETCAMERAFRAMERATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read frameRate from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*frameRate = (uint32_t)outVal;
		inPtr+=4;
	}// end of frameRate handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlGetCameraFrameRate()

// End Module: sysctrl
// Begin Module: testRamp
FLR_RESULT CLIENT_pkgTestrampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TESTRAMP_TYPE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetType()

FLR_RESULT CLIENT_pkgTestrampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TESTRAMP_TYPE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetType()

FLR_RESULT CLIENT_pkgTestrampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 7;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TESTRAMP_SETTINGS_T *inVal = (const FLR_TESTRAMP_SETTINGS_T *) &data;
		FLR_TESTRAMP_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 6;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetSettings()

FLR_RESULT CLIENT_pkgTestrampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 6;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TESTRAMP_SETTINGS_T outVal;
		byteToFLR_TESTRAMP_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TESTRAMP_SETTINGS_T)outVal;
		inPtr+=6;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetSettings()

FLR_RESULT CLIENT_pkgTestrampSetMotionState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetMotionState()

FLR_RESULT CLIENT_pkgTestrampGetMotionState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetMotionState()

FLR_RESULT CLIENT_pkgTestrampSetIndex(const uint8_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = data;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetIndex()

FLR_RESULT CLIENT_pkgTestrampGetIndex(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetIndex()

FLR_RESULT CLIENT_pkgTestrampGetMaxIndex(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMAXINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetMaxIndex()

// End Module: testRamp
// Begin Module: symbology
FLR_RESULT CLIENT_pkgSymbologySetEnable(const FLR_ENABLE_E draw_symbols) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write draw_symbols to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = draw_symbols;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologySetEnable()

FLR_RESULT CLIENT_pkgSymbologyCreateBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 9;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateBitmap()

FLR_RESULT CLIENT_pkgSymbologySendData(const uint8_t ID, const int16_t size, const uint8_t text[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 131;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write size to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = size;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write text to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SENDDATA, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologySendData()

FLR_RESULT CLIENT_pkgSymbologyCreateArc(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const float start_angle, const float end_angle, const uint32_t color) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 21;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write start_angle to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = start_angle;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write end_angle to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = end_angle;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEARC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateArc()

FLR_RESULT CLIENT_pkgSymbologyCreateText(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint8_t text[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 146;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write font to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int8_t inVal = font;
		CHARToByte(inVal, (const uint8_t *) outPtr );
		outPtr += 1;
	}
	
	//write size to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = size;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write alignment to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E inVal = alignment;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write text to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATETEXT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateText()

FLR_RESULT CLIENT_pkgSymbologyMoveSprite(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVESPRITE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyMoveSprite()

FLR_RESULT CLIENT_pkgSymbologyAddToGroup(const uint8_t ID, const uint8_t group_ID) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write group_ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = group_ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_ADDTOGROUP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyAddToGroup()

FLR_RESULT CLIENT_pkgSymbologyRemoveFromGroup(const uint8_t ID, const uint8_t group_ID) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write group_ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = group_ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_REMOVEFROMGROUP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyRemoveFromGroup()

FLR_RESULT CLIENT_pkgSymbologyUpdateAndShow(const uint8_t ID, const uint8_t visible) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write visible to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = visible;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_UPDATEANDSHOW, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyUpdateAndShow()

FLR_RESULT CLIENT_pkgSymbologyUpdateAndShowGroup(const uint8_t group_ID, const uint8_t visible) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write group_ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = group_ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write visible to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = visible;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_UPDATEANDSHOWGROUP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyUpdateAndShowGroup()

FLR_RESULT CLIENT_pkgSymbologyDelete(const uint8_t ID) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_DELETE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyDelete()

FLR_RESULT CLIENT_pkgSymbologyDeleteGroup(const uint8_t group_ID) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write group_ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = group_ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_DELETEGROUP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyDeleteGroup()

FLR_RESULT CLIENT_pkgSymbologyCreateFilledRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEFILLEDRECTANGLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateFilledRectangle()

FLR_RESULT CLIENT_pkgSymbologyCreateOutlinedRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEOUTLINEDRECTANGLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateOutlinedRectangle()

FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPng(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t size) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 7;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write size to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = size;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAPFROMPNG, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateBitmapFromPng()

FLR_RESULT CLIENT_pkgSymbologyCreateCompressedBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 9;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATECOMPRESSEDBITMAP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateCompressedBitmap()

FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPngFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 133;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAPFROMPNGFILE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateBitmapFromPngFile()

FLR_RESULT CLIENT_pkgSymbologyResetWritePosition(const uint8_t ID) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_RESETWRITEPOSITION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyResetWritePosition()

FLR_RESULT CLIENT_pkgSymbologyMoveByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write off_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = off_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write off_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = off_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVEBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyMoveByOffset()

FLR_RESULT CLIENT_pkgSymbologyMoveGroupByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write off_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = off_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write off_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = off_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVEGROUPBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyMoveGroupByOffset()

FLR_RESULT CLIENT_pkgSymbologyCreateFilledEllipse(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write width to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = width;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write height to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = height;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEFILLEDELLIPSE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateFilledEllipse()

FLR_RESULT CLIENT_pkgSymbologyCreateLine(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_X2 to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X2;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y2 to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y2;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write color to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = color;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATELINE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyCreateLine()

FLR_RESULT CLIENT_pkgSymbologySetZorder(const uint8_t ID, const uint8_t zorder) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write zorder to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = zorder;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETZORDER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologySetZorder()

FLR_RESULT CLIENT_pkgSymbologySaveConfiguration() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SAVECONFIGURATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologySaveConfiguration()

FLR_RESULT CLIENT_pkgSymbologyReloadConfiguration() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_RELOADCONFIGURATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyReloadConfiguration()

FLR_RESULT CLIENT_pkgSymbologyGetEnable(FLR_ENABLE_E *draw_symbols) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_GETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read draw_symbols from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*draw_symbols = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of draw_symbols handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyGetEnable()

FLR_RESULT CLIENT_pkgSymbologySetClonesNumber(const uint8_t ID, const uint8_t numberOfClones) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write numberOfClones to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = numberOfClones;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETCLONESNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologySetClonesNumber()

FLR_RESULT CLIENT_pkgSymbologyMoveCloneByOffset(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 6;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write cloneID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = cloneID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVECLONEBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyMoveCloneByOffset()

FLR_RESULT CLIENT_pkgSymbologyMoveCloneSprite(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 6;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = ID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write cloneID to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = cloneID;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write pos_X to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_X;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write pos_Y to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = pos_Y;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVECLONESPRITE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSymbologyMoveCloneSprite()

// End Module: symbology
// Begin Module: fileOps
FLR_RESULT CLIENT_pkgFileopsDir(uint8_t *dirent) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 128;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_DIR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read dirent from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal[128];
		byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
		dirent[0] = outVal[0];
		dirent[1] = outVal[1];
		dirent[2] = outVal[2];
		dirent[3] = outVal[3];
		dirent[4] = outVal[4];
		dirent[5] = outVal[5];
		dirent[6] = outVal[6];
		dirent[7] = outVal[7];
		dirent[8] = outVal[8];
		dirent[9] = outVal[9];
		dirent[10] = outVal[10];
		dirent[11] = outVal[11];
		dirent[12] = outVal[12];
		dirent[13] = outVal[13];
		dirent[14] = outVal[14];
		dirent[15] = outVal[15];
		dirent[16] = outVal[16];
		dirent[17] = outVal[17];
		dirent[18] = outVal[18];
		dirent[19] = outVal[19];
		dirent[20] = outVal[20];
		dirent[21] = outVal[21];
		dirent[22] = outVal[22];
		dirent[23] = outVal[23];
		dirent[24] = outVal[24];
		dirent[25] = outVal[25];
		dirent[26] = outVal[26];
		dirent[27] = outVal[27];
		dirent[28] = outVal[28];
		dirent[29] = outVal[29];
		dirent[30] = outVal[30];
		dirent[31] = outVal[31];
		dirent[32] = outVal[32];
		dirent[33] = outVal[33];
		dirent[34] = outVal[34];
		dirent[35] = outVal[35];
		dirent[36] = outVal[36];
		dirent[37] = outVal[37];
		dirent[38] = outVal[38];
		dirent[39] = outVal[39];
		dirent[40] = outVal[40];
		dirent[41] = outVal[41];
		dirent[42] = outVal[42];
		dirent[43] = outVal[43];
		dirent[44] = outVal[44];
		dirent[45] = outVal[45];
		dirent[46] = outVal[46];
		dirent[47] = outVal[47];
		dirent[48] = outVal[48];
		dirent[49] = outVal[49];
		dirent[50] = outVal[50];
		dirent[51] = outVal[51];
		dirent[52] = outVal[52];
		dirent[53] = outVal[53];
		dirent[54] = outVal[54];
		dirent[55] = outVal[55];
		dirent[56] = outVal[56];
		dirent[57] = outVal[57];
		dirent[58] = outVal[58];
		dirent[59] = outVal[59];
		dirent[60] = outVal[60];
		dirent[61] = outVal[61];
		dirent[62] = outVal[62];
		dirent[63] = outVal[63];
		dirent[64] = outVal[64];
		dirent[65] = outVal[65];
		dirent[66] = outVal[66];
		dirent[67] = outVal[67];
		dirent[68] = outVal[68];
		dirent[69] = outVal[69];
		dirent[70] = outVal[70];
		dirent[71] = outVal[71];
		dirent[72] = outVal[72];
		dirent[73] = outVal[73];
		dirent[74] = outVal[74];
		dirent[75] = outVal[75];
		dirent[76] = outVal[76];
		dirent[77] = outVal[77];
		dirent[78] = outVal[78];
		dirent[79] = outVal[79];
		dirent[80] = outVal[80];
		dirent[81] = outVal[81];
		dirent[82] = outVal[82];
		dirent[83] = outVal[83];
		dirent[84] = outVal[84];
		dirent[85] = outVal[85];
		dirent[86] = outVal[86];
		dirent[87] = outVal[87];
		dirent[88] = outVal[88];
		dirent[89] = outVal[89];
		dirent[90] = outVal[90];
		dirent[91] = outVal[91];
		dirent[92] = outVal[92];
		dirent[93] = outVal[93];
		dirent[94] = outVal[94];
		dirent[95] = outVal[95];
		dirent[96] = outVal[96];
		dirent[97] = outVal[97];
		dirent[98] = outVal[98];
		dirent[99] = outVal[99];
		dirent[100] = outVal[100];
		dirent[101] = outVal[101];
		dirent[102] = outVal[102];
		dirent[103] = outVal[103];
		dirent[104] = outVal[104];
		dirent[105] = outVal[105];
		dirent[106] = outVal[106];
		dirent[107] = outVal[107];
		dirent[108] = outVal[108];
		dirent[109] = outVal[109];
		dirent[110] = outVal[110];
		dirent[111] = outVal[111];
		dirent[112] = outVal[112];
		dirent[113] = outVal[113];
		dirent[114] = outVal[114];
		dirent[115] = outVal[115];
		dirent[116] = outVal[116];
		dirent[117] = outVal[117];
		dirent[118] = outVal[118];
		dirent[119] = outVal[119];
		dirent[120] = outVal[120];
		dirent[121] = outVal[121];
		dirent[122] = outVal[122];
		dirent[123] = outVal[123];
		dirent[124] = outVal[124];
		dirent[125] = outVal[125];
		dirent[126] = outVal[126];
		dirent[127] = outVal[127];
		inPtr+=128;
	}// end of dirent handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsDir()

FLR_RESULT CLIENT_pkgFileopsCd(const uint8_t path[], uint8_t *pwd) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 128;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 128;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_CD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read pwd from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal[128];
		byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
		pwd[0] = outVal[0];
		pwd[1] = outVal[1];
		pwd[2] = outVal[2];
		pwd[3] = outVal[3];
		pwd[4] = outVal[4];
		pwd[5] = outVal[5];
		pwd[6] = outVal[6];
		pwd[7] = outVal[7];
		pwd[8] = outVal[8];
		pwd[9] = outVal[9];
		pwd[10] = outVal[10];
		pwd[11] = outVal[11];
		pwd[12] = outVal[12];
		pwd[13] = outVal[13];
		pwd[14] = outVal[14];
		pwd[15] = outVal[15];
		pwd[16] = outVal[16];
		pwd[17] = outVal[17];
		pwd[18] = outVal[18];
		pwd[19] = outVal[19];
		pwd[20] = outVal[20];
		pwd[21] = outVal[21];
		pwd[22] = outVal[22];
		pwd[23] = outVal[23];
		pwd[24] = outVal[24];
		pwd[25] = outVal[25];
		pwd[26] = outVal[26];
		pwd[27] = outVal[27];
		pwd[28] = outVal[28];
		pwd[29] = outVal[29];
		pwd[30] = outVal[30];
		pwd[31] = outVal[31];
		pwd[32] = outVal[32];
		pwd[33] = outVal[33];
		pwd[34] = outVal[34];
		pwd[35] = outVal[35];
		pwd[36] = outVal[36];
		pwd[37] = outVal[37];
		pwd[38] = outVal[38];
		pwd[39] = outVal[39];
		pwd[40] = outVal[40];
		pwd[41] = outVal[41];
		pwd[42] = outVal[42];
		pwd[43] = outVal[43];
		pwd[44] = outVal[44];
		pwd[45] = outVal[45];
		pwd[46] = outVal[46];
		pwd[47] = outVal[47];
		pwd[48] = outVal[48];
		pwd[49] = outVal[49];
		pwd[50] = outVal[50];
		pwd[51] = outVal[51];
		pwd[52] = outVal[52];
		pwd[53] = outVal[53];
		pwd[54] = outVal[54];
		pwd[55] = outVal[55];
		pwd[56] = outVal[56];
		pwd[57] = outVal[57];
		pwd[58] = outVal[58];
		pwd[59] = outVal[59];
		pwd[60] = outVal[60];
		pwd[61] = outVal[61];
		pwd[62] = outVal[62];
		pwd[63] = outVal[63];
		pwd[64] = outVal[64];
		pwd[65] = outVal[65];
		pwd[66] = outVal[66];
		pwd[67] = outVal[67];
		pwd[68] = outVal[68];
		pwd[69] = outVal[69];
		pwd[70] = outVal[70];
		pwd[71] = outVal[71];
		pwd[72] = outVal[72];
		pwd[73] = outVal[73];
		pwd[74] = outVal[74];
		pwd[75] = outVal[75];
		pwd[76] = outVal[76];
		pwd[77] = outVal[77];
		pwd[78] = outVal[78];
		pwd[79] = outVal[79];
		pwd[80] = outVal[80];
		pwd[81] = outVal[81];
		pwd[82] = outVal[82];
		pwd[83] = outVal[83];
		pwd[84] = outVal[84];
		pwd[85] = outVal[85];
		pwd[86] = outVal[86];
		pwd[87] = outVal[87];
		pwd[88] = outVal[88];
		pwd[89] = outVal[89];
		pwd[90] = outVal[90];
		pwd[91] = outVal[91];
		pwd[92] = outVal[92];
		pwd[93] = outVal[93];
		pwd[94] = outVal[94];
		pwd[95] = outVal[95];
		pwd[96] = outVal[96];
		pwd[97] = outVal[97];
		pwd[98] = outVal[98];
		pwd[99] = outVal[99];
		pwd[100] = outVal[100];
		pwd[101] = outVal[101];
		pwd[102] = outVal[102];
		pwd[103] = outVal[103];
		pwd[104] = outVal[104];
		pwd[105] = outVal[105];
		pwd[106] = outVal[106];
		pwd[107] = outVal[107];
		pwd[108] = outVal[108];
		pwd[109] = outVal[109];
		pwd[110] = outVal[110];
		pwd[111] = outVal[111];
		pwd[112] = outVal[112];
		pwd[113] = outVal[113];
		pwd[114] = outVal[114];
		pwd[115] = outVal[115];
		pwd[116] = outVal[116];
		pwd[117] = outVal[117];
		pwd[118] = outVal[118];
		pwd[119] = outVal[119];
		pwd[120] = outVal[120];
		pwd[121] = outVal[121];
		pwd[122] = outVal[122];
		pwd[123] = outVal[123];
		pwd[124] = outVal[124];
		pwd[125] = outVal[125];
		pwd[126] = outVal[126];
		pwd[127] = outVal[127];
		inPtr+=128;
	}// end of pwd handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsCd()

FLR_RESULT CLIENT_pkgFileopsMd(const uint8_t path[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 128;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_MD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsMd()

FLR_RESULT CLIENT_pkgFileopsFopen(const uint8_t path[], const uint8_t mode[], uint32_t *id) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 256;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	//write mode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {mode[0], mode[1], mode[2], mode[3], mode[4], mode[5], mode[6], mode[7], mode[8], mode[9], mode[10], mode[11], mode[12], mode[13], mode[14], mode[15], mode[16], mode[17], mode[18], mode[19], mode[20], mode[21], mode[22], mode[23], mode[24], mode[25], mode[26], mode[27], mode[28], mode[29], mode[30], mode[31], mode[32], mode[33], mode[34], mode[35], mode[36], mode[37], mode[38], mode[39], mode[40], mode[41], mode[42], mode[43], mode[44], mode[45], mode[46], mode[47], mode[48], mode[49], mode[50], mode[51], mode[52], mode[53], mode[54], mode[55], mode[56], mode[57], mode[58], mode[59], mode[60], mode[61], mode[62], mode[63], mode[64], mode[65], mode[66], mode[67], mode[68], mode[69], mode[70], mode[71], mode[72], mode[73], mode[74], mode[75], mode[76], mode[77], mode[78], mode[79], mode[80], mode[81], mode[82], mode[83], mode[84], mode[85], mode[86], mode[87], mode[88], mode[89], mode[90], mode[91], mode[92], mode[93], mode[94], mode[95], mode[96], mode[97], mode[98], mode[99], mode[100], mode[101], mode[102], mode[103], mode[104], mode[105], mode[106], mode[107], mode[108], mode[109], mode[110], mode[111], mode[112], mode[113], mode[114], mode[115], mode[116], mode[117], mode[118], mode[119], mode[120], mode[121], mode[122], mode[123], mode[124], mode[125], mode[126], mode[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FOPEN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read id from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*id = (uint32_t)outVal;
		inPtr+=4;
	}// end of id handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFopen()

FLR_RESULT CLIENT_pkgFileopsFclose(const uint32_t id) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FCLOSE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFclose()

FLR_RESULT CLIENT_pkgFileopsFread(const uint32_t id, const uint32_t length, uint8_t *buf, uint32_t *ret) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 132;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write length to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = length;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FREAD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read buf from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal[128];
		byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
		buf[0] = outVal[0];
		buf[1] = outVal[1];
		buf[2] = outVal[2];
		buf[3] = outVal[3];
		buf[4] = outVal[4];
		buf[5] = outVal[5];
		buf[6] = outVal[6];
		buf[7] = outVal[7];
		buf[8] = outVal[8];
		buf[9] = outVal[9];
		buf[10] = outVal[10];
		buf[11] = outVal[11];
		buf[12] = outVal[12];
		buf[13] = outVal[13];
		buf[14] = outVal[14];
		buf[15] = outVal[15];
		buf[16] = outVal[16];
		buf[17] = outVal[17];
		buf[18] = outVal[18];
		buf[19] = outVal[19];
		buf[20] = outVal[20];
		buf[21] = outVal[21];
		buf[22] = outVal[22];
		buf[23] = outVal[23];
		buf[24] = outVal[24];
		buf[25] = outVal[25];
		buf[26] = outVal[26];
		buf[27] = outVal[27];
		buf[28] = outVal[28];
		buf[29] = outVal[29];
		buf[30] = outVal[30];
		buf[31] = outVal[31];
		buf[32] = outVal[32];
		buf[33] = outVal[33];
		buf[34] = outVal[34];
		buf[35] = outVal[35];
		buf[36] = outVal[36];
		buf[37] = outVal[37];
		buf[38] = outVal[38];
		buf[39] = outVal[39];
		buf[40] = outVal[40];
		buf[41] = outVal[41];
		buf[42] = outVal[42];
		buf[43] = outVal[43];
		buf[44] = outVal[44];
		buf[45] = outVal[45];
		buf[46] = outVal[46];
		buf[47] = outVal[47];
		buf[48] = outVal[48];
		buf[49] = outVal[49];
		buf[50] = outVal[50];
		buf[51] = outVal[51];
		buf[52] = outVal[52];
		buf[53] = outVal[53];
		buf[54] = outVal[54];
		buf[55] = outVal[55];
		buf[56] = outVal[56];
		buf[57] = outVal[57];
		buf[58] = outVal[58];
		buf[59] = outVal[59];
		buf[60] = outVal[60];
		buf[61] = outVal[61];
		buf[62] = outVal[62];
		buf[63] = outVal[63];
		buf[64] = outVal[64];
		buf[65] = outVal[65];
		buf[66] = outVal[66];
		buf[67] = outVal[67];
		buf[68] = outVal[68];
		buf[69] = outVal[69];
		buf[70] = outVal[70];
		buf[71] = outVal[71];
		buf[72] = outVal[72];
		buf[73] = outVal[73];
		buf[74] = outVal[74];
		buf[75] = outVal[75];
		buf[76] = outVal[76];
		buf[77] = outVal[77];
		buf[78] = outVal[78];
		buf[79] = outVal[79];
		buf[80] = outVal[80];
		buf[81] = outVal[81];
		buf[82] = outVal[82];
		buf[83] = outVal[83];
		buf[84] = outVal[84];
		buf[85] = outVal[85];
		buf[86] = outVal[86];
		buf[87] = outVal[87];
		buf[88] = outVal[88];
		buf[89] = outVal[89];
		buf[90] = outVal[90];
		buf[91] = outVal[91];
		buf[92] = outVal[92];
		buf[93] = outVal[93];
		buf[94] = outVal[94];
		buf[95] = outVal[95];
		buf[96] = outVal[96];
		buf[97] = outVal[97];
		buf[98] = outVal[98];
		buf[99] = outVal[99];
		buf[100] = outVal[100];
		buf[101] = outVal[101];
		buf[102] = outVal[102];
		buf[103] = outVal[103];
		buf[104] = outVal[104];
		buf[105] = outVal[105];
		buf[106] = outVal[106];
		buf[107] = outVal[107];
		buf[108] = outVal[108];
		buf[109] = outVal[109];
		buf[110] = outVal[110];
		buf[111] = outVal[111];
		buf[112] = outVal[112];
		buf[113] = outVal[113];
		buf[114] = outVal[114];
		buf[115] = outVal[115];
		buf[116] = outVal[116];
		buf[117] = outVal[117];
		buf[118] = outVal[118];
		buf[119] = outVal[119];
		buf[120] = outVal[120];
		buf[121] = outVal[121];
		buf[122] = outVal[122];
		buf[123] = outVal[123];
		buf[124] = outVal[124];
		buf[125] = outVal[125];
		buf[126] = outVal[126];
		buf[127] = outVal[127];
		inPtr+=128;
	}// end of buf handling
	
	// read ret from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*ret = (uint32_t)outVal;
		inPtr+=4;
	}// end of ret handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFread()

FLR_RESULT CLIENT_pkgFileopsFwrite(const uint32_t id, const uint32_t length, const uint8_t buf[], uint32_t *ret) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 136;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write length to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = length;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write buf to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7], buf[8], buf[9], buf[10], buf[11], buf[12], buf[13], buf[14], buf[15], buf[16], buf[17], buf[18], buf[19], buf[20], buf[21], buf[22], buf[23], buf[24], buf[25], buf[26], buf[27], buf[28], buf[29], buf[30], buf[31], buf[32], buf[33], buf[34], buf[35], buf[36], buf[37], buf[38], buf[39], buf[40], buf[41], buf[42], buf[43], buf[44], buf[45], buf[46], buf[47], buf[48], buf[49], buf[50], buf[51], buf[52], buf[53], buf[54], buf[55], buf[56], buf[57], buf[58], buf[59], buf[60], buf[61], buf[62], buf[63], buf[64], buf[65], buf[66], buf[67], buf[68], buf[69], buf[70], buf[71], buf[72], buf[73], buf[74], buf[75], buf[76], buf[77], buf[78], buf[79], buf[80], buf[81], buf[82], buf[83], buf[84], buf[85], buf[86], buf[87], buf[88], buf[89], buf[90], buf[91], buf[92], buf[93], buf[94], buf[95], buf[96], buf[97], buf[98], buf[99], buf[100], buf[101], buf[102], buf[103], buf[104], buf[105], buf[106], buf[107], buf[108], buf[109], buf[110], buf[111], buf[112], buf[113], buf[114], buf[115], buf[116], buf[117], buf[118], buf[119], buf[120], buf[121], buf[122], buf[123], buf[124], buf[125], buf[126], buf[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FWRITE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ret from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*ret = (uint32_t)outVal;
		inPtr+=4;
	}// end of ret handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFwrite()

FLR_RESULT CLIENT_pkgFileopsFtell(const uint32_t id, uint32_t *offset) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FTELL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read offset from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*offset = (uint32_t)outVal;
		inPtr+=4;
	}// end of offset handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFtell()

FLR_RESULT CLIENT_pkgFileopsFseek(const uint32_t id, const uint32_t offset, const uint32_t origin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 12;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write origin to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = origin;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FSEEK, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFseek()

FLR_RESULT CLIENT_pkgFileopsFtruncate(const uint32_t id, const uint32_t length) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = id;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write length to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = length;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FTRUNCATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsFtruncate()

FLR_RESULT CLIENT_pkgFileopsRmdir(const uint8_t path[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 128;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RMDIR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsRmdir()

FLR_RESULT CLIENT_pkgFileopsRm(const uint8_t path[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 128;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsRm()

FLR_RESULT CLIENT_pkgFileopsRename(const uint8_t oldpath[], const uint8_t newpath[]) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 256;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write oldpath to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {oldpath[0], oldpath[1], oldpath[2], oldpath[3], oldpath[4], oldpath[5], oldpath[6], oldpath[7], oldpath[8], oldpath[9], oldpath[10], oldpath[11], oldpath[12], oldpath[13], oldpath[14], oldpath[15], oldpath[16], oldpath[17], oldpath[18], oldpath[19], oldpath[20], oldpath[21], oldpath[22], oldpath[23], oldpath[24], oldpath[25], oldpath[26], oldpath[27], oldpath[28], oldpath[29], oldpath[30], oldpath[31], oldpath[32], oldpath[33], oldpath[34], oldpath[35], oldpath[36], oldpath[37], oldpath[38], oldpath[39], oldpath[40], oldpath[41], oldpath[42], oldpath[43], oldpath[44], oldpath[45], oldpath[46], oldpath[47], oldpath[48], oldpath[49], oldpath[50], oldpath[51], oldpath[52], oldpath[53], oldpath[54], oldpath[55], oldpath[56], oldpath[57], oldpath[58], oldpath[59], oldpath[60], oldpath[61], oldpath[62], oldpath[63], oldpath[64], oldpath[65], oldpath[66], oldpath[67], oldpath[68], oldpath[69], oldpath[70], oldpath[71], oldpath[72], oldpath[73], oldpath[74], oldpath[75], oldpath[76], oldpath[77], oldpath[78], oldpath[79], oldpath[80], oldpath[81], oldpath[82], oldpath[83], oldpath[84], oldpath[85], oldpath[86], oldpath[87], oldpath[88], oldpath[89], oldpath[90], oldpath[91], oldpath[92], oldpath[93], oldpath[94], oldpath[95], oldpath[96], oldpath[97], oldpath[98], oldpath[99], oldpath[100], oldpath[101], oldpath[102], oldpath[103], oldpath[104], oldpath[105], oldpath[106], oldpath[107], oldpath[108], oldpath[109], oldpath[110], oldpath[111], oldpath[112], oldpath[113], oldpath[114], oldpath[115], oldpath[116], oldpath[117], oldpath[118], oldpath[119], oldpath[120], oldpath[121], oldpath[122], oldpath[123], oldpath[124], oldpath[125], oldpath[126], oldpath[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	//write newpath to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {newpath[0], newpath[1], newpath[2], newpath[3], newpath[4], newpath[5], newpath[6], newpath[7], newpath[8], newpath[9], newpath[10], newpath[11], newpath[12], newpath[13], newpath[14], newpath[15], newpath[16], newpath[17], newpath[18], newpath[19], newpath[20], newpath[21], newpath[22], newpath[23], newpath[24], newpath[25], newpath[26], newpath[27], newpath[28], newpath[29], newpath[30], newpath[31], newpath[32], newpath[33], newpath[34], newpath[35], newpath[36], newpath[37], newpath[38], newpath[39], newpath[40], newpath[41], newpath[42], newpath[43], newpath[44], newpath[45], newpath[46], newpath[47], newpath[48], newpath[49], newpath[50], newpath[51], newpath[52], newpath[53], newpath[54], newpath[55], newpath[56], newpath[57], newpath[58], newpath[59], newpath[60], newpath[61], newpath[62], newpath[63], newpath[64], newpath[65], newpath[66], newpath[67], newpath[68], newpath[69], newpath[70], newpath[71], newpath[72], newpath[73], newpath[74], newpath[75], newpath[76], newpath[77], newpath[78], newpath[79], newpath[80], newpath[81], newpath[82], newpath[83], newpath[84], newpath[85], newpath[86], newpath[87], newpath[88], newpath[89], newpath[90], newpath[91], newpath[92], newpath[93], newpath[94], newpath[95], newpath[96], newpath[97], newpath[98], newpath[99], newpath[100], newpath[101], newpath[102], newpath[103], newpath[104], newpath[105], newpath[106], newpath[107], newpath[108], newpath[109], newpath[110], newpath[111], newpath[112], newpath[113], newpath[114], newpath[115], newpath[116], newpath[117], newpath[118], newpath[119], newpath[120], newpath[121], newpath[122], newpath[123], newpath[124], newpath[125], newpath[126], newpath[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RENAME, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsRename()

FLR_RESULT CLIENT_pkgFileopsGetFileSize(const uint8_t path[], uint32_t *fileLength) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 128;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write path to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
		UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
		outPtr += 128;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_GETFILESIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read fileLength from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*fileLength = (uint32_t)outVal;
		inPtr+=4;
	}// end of fileLength handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgFileopsGetFileSize()

// End Module: fileOps
// Begin Module: jffs2
FLR_RESULT CLIENT_pkgJffs2Mount() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_MOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgJffs2Mount()

FLR_RESULT CLIENT_pkgJffs2Unmount() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_UNMOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgJffs2Unmount()

FLR_RESULT CLIENT_pkgJffs2GetState(FLR_JFFS2_STATE_E *state) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read state from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*state = (FLR_JFFS2_STATE_E)outVal;
		inPtr+=4;
	}// end of state handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgJffs2GetState()

// End Module: jffs2
// Begin Module: splashScreen
FLR_RESULT CLIENT_pkgSplashscreenSetDuration(const uint32_t screen_num, const uint32_t periodMs) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write periodMs to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = periodMs;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETDURATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenSetDuration()

FLR_RESULT CLIENT_pkgSplashscreenSetDataType(const uint32_t screen_num, const FLR_SPLASHSCREEN_FILETYPE_E filetype) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write filetype to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SPLASHSCREEN_FILETYPE_E inVal = filetype;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETDATATYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenSetDataType()

FLR_RESULT CLIENT_pkgSplashscreenSetBackground(const uint32_t screen_num, const uint32_t backgroundColor) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write backgroundColor to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = backgroundColor;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETBACKGROUND, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenSetBackground()

FLR_RESULT CLIENT_pkgSplashscreenGetDuration(const uint32_t screen_num, uint32_t *periodMs) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETDURATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read periodMs from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*periodMs = (uint32_t)outVal;
		inPtr+=4;
	}// end of periodMs handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenGetDuration()

FLR_RESULT CLIENT_pkgSplashscreenGetDataType(const uint32_t screen_num, FLR_SPLASHSCREEN_FILETYPE_E *filetype) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETDATATYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read filetype from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*filetype = (FLR_SPLASHSCREEN_FILETYPE_E)outVal;
		inPtr+=4;
	}// end of filetype handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenGetDataType()

FLR_RESULT CLIENT_pkgSplashscreenGetBackground(const uint32_t screen_num, uint32_t *backgroundColor) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write screen_num to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = screen_num;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETBACKGROUND, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read backgroundColor from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*backgroundColor = (uint32_t)outVal;
		inPtr+=4;
	}// end of backgroundColor handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSplashscreenGetBackground()

// End Module: splashScreen
// Begin Module: systemSymbols
FLR_RESULT CLIENT_pkgSystemsymbolsGetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, uint8_t *id, FLR_SYSTEMSYMBOLS_ID_TYPE_E *id_type) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 5;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write symbol to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_GETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read id from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*id = (uint8_t)outVal;
		inPtr+=1;
	}// end of id handling
	
	// read id_type from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*id_type = (FLR_SYSTEMSYMBOLS_ID_TYPE_E)outVal;
		inPtr+=4;
	}// end of id_type handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSystemsymbolsGetID()

FLR_RESULT CLIENT_pkgSystemsymbolsSetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const uint8_t id, const FLR_SYSTEMSYMBOLS_ID_TYPE_E id_type) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 9;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write symbol to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write id to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = id;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write id_type to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYSTEMSYMBOLS_ID_TYPE_E inVal = id_type;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_SETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSystemsymbolsSetID()

FLR_RESULT CLIENT_pkgSystemsymbolsGetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, FLR_ENABLE_E *enabled) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write symbol to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_GETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read enabled from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*enabled = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of enabled handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSystemsymbolsGetEnable()

FLR_RESULT CLIENT_pkgSystemsymbolsSetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const FLR_ENABLE_E enabled) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write symbol to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write enabled to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = enabled;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_SETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSystemsymbolsSetEnable()

// End Module: systemSymbols
// Begin Module: sffc
FLR_RESULT CLIENT_pkgSffcGetScaleFactor(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETSCALEFACTOR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetScaleFactor()

FLR_RESULT CLIENT_pkgSffcGetDeltaTempLinearCoeff(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetDeltaTempLinearCoeff()

FLR_RESULT CLIENT_pkgSffcSetDeltaTempLinearCoeff(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcSetDeltaTempLinearCoeff()

FLR_RESULT CLIENT_pkgSffcGetDeltaTempOffsetCoeff(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetDeltaTempOffsetCoeff()

FLR_RESULT CLIENT_pkgSffcSetDeltaTempOffsetCoeff(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcSetDeltaTempOffsetCoeff()

FLR_RESULT CLIENT_pkgSffcGetFpaTempLinearCoeff(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETFPATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetFpaTempLinearCoeff()

FLR_RESULT CLIENT_pkgSffcSetFpaTempLinearCoeff(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETFPATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcSetFpaTempLinearCoeff()

FLR_RESULT CLIENT_pkgSffcGetFpaTempOffsetCoeff(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETFPATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetFpaTempOffsetCoeff()

FLR_RESULT CLIENT_pkgSffcSetFpaTempOffsetCoeff(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETFPATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcSetFpaTempOffsetCoeff()

FLR_RESULT CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPTIMELIMITINSECS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs()

FLR_RESULT CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPTIMELIMITINSECS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs()

// End Module: sffc
// Begin Module: imageStats
FLR_RESULT CLIENT_pkgImagestatsGetTotalHistPixelsInROI(uint32_t *totalPixelsInROI) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETTOTALHISTPIXELSINROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read totalPixelsInROI from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*totalPixelsInROI = (uint32_t)outVal;
		inPtr+=4;
	}// end of totalPixelsInROI handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetTotalHistPixelsInROI()

FLR_RESULT CLIENT_pkgImagestatsGetPopBelowLowToHighThresh(uint32_t *popBelowLowToHighThresh) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETPOPBELOWLOWTOHIGHTHRESH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read popBelowLowToHighThresh from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*popBelowLowToHighThresh = (uint32_t)outVal;
		inPtr+=4;
	}// end of popBelowLowToHighThresh handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetPopBelowLowToHighThresh()

FLR_RESULT CLIENT_pkgImagestatsGetPopAboveHighToLowThresh(uint32_t *popAboveHighToLowThresh) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETPOPABOVEHIGHTOLOWTHRESH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read popAboveHighToLowThresh from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*popAboveHighToLowThresh = (uint32_t)outVal;
		inPtr+=4;
	}// end of popAboveHighToLowThresh handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetPopAboveHighToLowThresh()

FLR_RESULT CLIENT_pkgImagestatsSetROI(const FLR_ROI_T roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write roi to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ROI_T *inVal = (const FLR_ROI_T *) &roi;
		FLR_ROI_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 8;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_SETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsSetROI()

FLR_RESULT CLIENT_pkgImagestatsGetROI(FLR_ROI_T *roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read roi from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_ROI_T outVal;
		byteToFLR_ROI_T( (const uint8_t *) inPtr, &outVal);
		*roi = (FLR_ROI_T)outVal;
		inPtr+=8;
	}// end of roi handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetROI()

FLR_RESULT CLIENT_pkgImagestatsGetFirstBin(uint16_t *firstBin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETFIRSTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read firstBin from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*firstBin = (uint16_t)outVal;
		inPtr+=2;
	}// end of firstBin handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetFirstBin()

FLR_RESULT CLIENT_pkgImagestatsGetLastBin(uint16_t *lastBin) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETLASTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read lastBin from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*lastBin = (uint16_t)outVal;
		inPtr+=2;
	}// end of lastBin handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetLastBin()

FLR_RESULT CLIENT_pkgImagestatsGetMean(uint16_t *mean) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETMEAN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read mean from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*mean = (uint16_t)outVal;
		inPtr+=2;
	}// end of mean handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetMean()

FLR_RESULT CLIENT_pkgImagestatsGetFirstBinInROI(uint16_t *firstBinInROI) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETFIRSTBININROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read firstBinInROI from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*firstBinInROI = (uint16_t)outVal;
		inPtr+=2;
	}// end of firstBinInROI handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetFirstBinInROI()

FLR_RESULT CLIENT_pkgImagestatsGetLastBinInROI(uint16_t *lastBinInROI) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETLASTBININROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read lastBinInROI from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*lastBinInROI = (uint16_t)outVal;
		inPtr+=2;
	}// end of lastBinInROI handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetLastBinInROI()

FLR_RESULT CLIENT_pkgImagestatsGetMeanInROI(uint16_t *meanInROI) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETMEANINROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read meanInROI from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*meanInROI = (uint16_t)outVal;
		inPtr+=2;
	}// end of meanInROI handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgImagestatsGetMeanInROI()

// End Module: imageStats
// Begin Module: srnr
FLR_RESULT CLIENT_pkgSrnrSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrSetEnableState()

FLR_RESULT CLIENT_pkgSrnrGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetEnableState()

FLR_RESULT CLIENT_pkgSrnrSetThRowSum(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETTHROWSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrSetThRowSum()

FLR_RESULT CLIENT_pkgSrnrGetThRowSum(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHROWSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetThRowSum()

FLR_RESULT CLIENT_pkgSrnrSetThPixel(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrSetThPixel()

FLR_RESULT CLIENT_pkgSrnrGetThPixel(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetThPixel()

FLR_RESULT CLIENT_pkgSrnrSetMaxCorr(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrSetMaxCorr()

FLR_RESULT CLIENT_pkgSrnrGetMaxCorr(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetMaxCorr()

FLR_RESULT CLIENT_pkgSrnrGetThPixelApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHPIXELAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetThPixelApplied()

FLR_RESULT CLIENT_pkgSrnrGetMaxCorrApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETMAXCORRAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSrnrGetMaxCorrApplied()

// End Module: srnr
// Begin Module: dummy
FLR_RESULT CLIENT_pkgDummyBadCommand() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DUMMY_BADCOMMAND, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDummyBadCommand()

// End Module: dummy
