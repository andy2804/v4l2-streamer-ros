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


#include "Client_API.h"

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetGainState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetGainState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetGainState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetGainState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetFfcState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetFfcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFfcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetFfcState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetFfcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetTempCorrectionState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetTempCorrectionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTempCorrectionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetTempCorrectionState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetTempCorrectionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTempCorrectionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetIConstL(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetIConstL(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIConstL()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetIConstL(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetIConstL(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIConstL()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetIConstM(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetIConstM(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIConstM()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetIConstM(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetIConstM(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIConstM()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetAveragerState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetAveragerState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAveragerState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetAveragerState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetAveragerState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAveragerState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetNumFFCFrames(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetNumFFCFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetNumFFCFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetNumFFCFrames(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetNumFFCFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNumFFCFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetAveragerThreshold(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetAveragerThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAveragerThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetTestRampState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetTestRampState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTestRampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetTestRampState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetTestRampState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTestRampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetSffcState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetSffcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSffcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetSffcState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetSffcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSffcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRpmState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRpmState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRpmState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRpmState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRpmState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRpmState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRpmThreshold(uint16_t *threshold){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRpmThreshold(threshold);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRpmThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetFfcZeroMeanState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetFfcZeroMeanState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFfcZeroMeanState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetFfcZeroMeanState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetFfcZeroMeanState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcZeroMeanState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsPopThreshold(const uint16_t threshold){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsPopThreshold(threshold);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsPopThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsPopThreshold(uint16_t *threshold){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsPopThreshold(threshold);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsPopThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsCloseThreshold(const uint16_t threshold){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsCloseThreshold(threshold);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsCloseThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsCloseThreshold(uint16_t *threshold){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsCloseThreshold(threshold);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsCloseThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsTooFewQuit(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsTooFewQuit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsTooFewQuit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsTooFewQuit(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsTooFewQuit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsTooFewQuit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsTooFew(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsTooFew(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsTooFew()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsTooFew(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsTooFew(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsTooFew()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsMinCorrection(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsMinCorrection(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsMinCorrection()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsMinCorrection(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsMinCorrection(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsMinCorrection()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsDamping(const uint8_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsDamping(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsDamping(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsDamping(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsFrameHysteresis(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsFrameHysteresis(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsFrameHysteresis()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsFrameHysteresis(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsFrameHysteresis(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsFrameHysteresis()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsBadDamping(const uint8_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsBadDamping(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsBadDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsBadDamping(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsBadDamping(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsBadDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoSetRnsNumGoodDampingThreshold(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetRnsNumGoodDampingThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetRnsNumGoodDampingThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsNumGoodDampingThreshold(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsNumGoodDampingThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsNumGoodDampingThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT gaoGetRnsFfcDesired(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsFfcDesired(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsFfcDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPATemp(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATemp(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATemp()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFrameCount(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFrameCount(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFrameCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetActiveNormalizationTarget(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetActiveNormalizationTarget(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetActiveNormalizationTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicSetFPARampState(const FLR_ENABLE_E state){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPARampState(state);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPARampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPARampState(FLR_ENABLE_E *state){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPARampState(state);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPARampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetSensorADC1(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetSensorADC1(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorADC1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetSensorADC2(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetSensorADC2(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorADC2()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicSetFPATempOffset(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempOffset(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPATempOffset(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempOffset(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempTable(table);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempTable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicSetFPATempValue(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempValue(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT roicGetFPATempValue(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempValue(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bprSetState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgBprSetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bprGetState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgBprGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetrySetState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTelemetrySetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetryGetState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTelemetryGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetrySetLocation(const FLR_TELEMETRY_LOC_E data){
	FLR_RESULT returncode = CLIENT_pkgTelemetrySetLocation(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetryGetLocation(FLR_TELEMETRY_LOC_E *data){
	FLR_RESULT returncode = CLIENT_pkgTelemetryGetLocation(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetrySetPacking(const FLR_TELEMETRY_PACKING_E data){
	FLR_RESULT returncode = CLIENT_pkgTelemetrySetPacking(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPacking()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT telemetryGetPacking(FLR_TELEMETRY_PACKING_E *data){
	FLR_RESULT returncode = CLIENT_pkgTelemetryGetPacking(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPacking()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetCameraSN(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCameraSN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraSN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCameraPN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraPN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSensorSN(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSensorSN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorSN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonRunFFC(){
	FLR_RESULT returncode = CLIENT_pkgBosonRunFFC();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RunFFC()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetFFCTempThreshold(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCTempThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFFCTempThreshold(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCTempThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetFFCFrameThreshold(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCFrameThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCFrameThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFFCFrameThreshold(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCFrameThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCFrameThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFFCInProgress(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCInProgress(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCInProgress()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonReboot(){
	FLR_RESULT returncode = CLIENT_pkgBosonReboot();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Reboot()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCMode(ffcMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCMode(ffcMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode){
	FLR_RESULT returncode = CLIENT_pkgBosonSetGainMode(gainMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetGainMode(gainMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonWriteDynamicHeaderToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteDynamicHeaderToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteDynamicHeaderToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonReadDynamicHeaderFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonReadDynamicHeaderFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadDynamicHeaderFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonRestoreFactoryDefaultsFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RestoreFactoryDefaultsFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonRestoreFactoryBadPixelsFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RestoreFactoryBadPixelsFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonWriteBadPixelsToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteBadPixelsToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteBadPixelsToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSoftwareRev(major, minor, patch);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSoftwareRev()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetBadPixelLocation(const uint32_t row, const uint32_t col){
	FLR_RESULT returncode = CLIENT_pkgBosonSetBadPixelLocation(row, col);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetBadPixelLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonlookupFPATempDegCx10(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonlookupFPATempDegCx10(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of lookupFPATempDegCx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonlookupFPATempDegKx10(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonlookupFPATempDegKx10(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of lookupFPATempDegKx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonWriteLensNvFfcToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteLensNvFfcToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteLensNvFfcToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonWriteLensGainToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteLensGainToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteLensGainToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetLensNumber(const uint32_t lensNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonSetLensNumber(lensNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLensNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetLensNumber(uint32_t *lensNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetLensNumber(lensNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLensNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetTableNumber(const uint32_t tableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonSetTableNumber(tableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetTableNumber(uint32_t *tableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetTableNumber(tableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSensorPN(sensorPN);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorPN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct){
	FLR_RESULT returncode = CLIENT_pkgBosonSetGainSwitchParams(parm_struct);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainSwitchParams()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct){
	FLR_RESULT returncode = CLIENT_pkgBosonGetGainSwitchParams(parm_struct);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainSwitchParams()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSwitchToHighGainFlag(switchToHighGainFlag);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSwitchToHighGainFlag()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSwitchToLowGainFlag(switchToLowGainFlag);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSwitchToLowGainFlag()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetCLowToHighPercent(uint32_t *cLowToHighPercent){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCLowToHighPercent(cLowToHighPercent);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCLowToHighPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetMaxNUCTables(uint32_t *maxNUCTables){
	FLR_RESULT returncode = CLIENT_pkgBosonGetMaxNUCTables(maxNUCTables);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxNUCTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetMaxLensTables(uint32_t *maxLensTables){
	FLR_RESULT returncode = CLIENT_pkgBosonGetMaxLensTables(maxLensTables);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxLensTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFfcWaitCloseFrames(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFfcWaitCloseFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcWaitCloseFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetFfcWaitCloseFrames(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFfcWaitCloseFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFfcWaitCloseFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonCheckForTableSwitch(){
	FLR_RESULT returncode = CLIENT_pkgBosonCheckForTableSwitch();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CheckForTableSwitch()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetDesiredTableNumber(uint32_t *desiredTableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetDesiredTableNumber(desiredTableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDesiredTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFfcStatus(ffcStatus);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcStatus()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFfcDesired(uint32_t *ffcDesired){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFfcDesired(ffcDesired);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetLastFFCFrameCount(uint32_t *frameCount){
	FLR_RESULT returncode = CLIENT_pkgBosonGetLastFFCFrameCount(frameCount);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastFFCFrameCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetLastFFCTempDegKx10(uint16_t *temp){
	FLR_RESULT returncode = CLIENT_pkgBosonGetLastFFCTempDegKx10(temp);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastFFCTempDegKx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetTableSwitchDesired(uint16_t *tableSwitchDesired){
	FLR_RESULT returncode = CLIENT_pkgBosonGetTableSwitchDesired(tableSwitchDesired);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTableSwitchDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetOverTempThreshold(float *temperatureInC){
	FLR_RESULT returncode = CLIENT_pkgBosonGetOverTempThreshold(temperatureInC);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOverTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetLowPowerMode(uint16_t *lowPowerMode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetLowPowerMode(lowPowerMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLowPowerMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetOverTempEventOccurred(uint16_t *overTempEventOccurred){
	FLR_RESULT returncode = CLIENT_pkgBosonGetOverTempEventOccurred(overTempEventOccurred);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOverTempEventOccurred()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetPermitThermalShutdownOverride(const FLR_ENABLE_E permitThermalShutdownOverride){
	FLR_RESULT returncode = CLIENT_pkgBosonSetPermitThermalShutdownOverride(permitThermalShutdownOverride);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPermitThermalShutdownOverride()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetPermitThermalShutdownOverride(FLR_ENABLE_E *permitThermalShutdownOverride){
	FLR_RESULT returncode = CLIENT_pkgBosonGetPermitThermalShutdownOverride(permitThermalShutdownOverride);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPermitThermalShutdownOverride()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetMyriadTemp(float *myriadTemp){
	FLR_RESULT returncode = CLIENT_pkgBosonGetMyriadTemp(myriadTemp);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMyriadTemp()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetNvFFCNucTableNumberLens0(int32_t *nvFFCNucTableNumberLens0){
	FLR_RESULT returncode = CLIENT_pkgBosonGetNvFFCNucTableNumberLens0(nvFFCNucTableNumberLens0);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNvFFCNucTableNumberLens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetNvFFCNucTableNumberLens1(int32_t *nvFFCNucTableNumberLens1){
	FLR_RESULT returncode = CLIENT_pkgBosonGetNvFFCNucTableNumberLens1(nvFFCNucTableNumberLens1);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNvFFCNucTableNumberLens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetNvFFCFPATempDegKx10Lens0(uint16_t *nvFFCFPATempDegKx10Lens0){
	FLR_RESULT returncode = CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0(nvFFCFPATempDegKx10Lens0);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNvFFCFPATempDegKx10Lens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetNvFFCFPATempDegKx10Lens1(uint16_t *nvFFCFPATempDegKx10Lens1){
	FLR_RESULT returncode = CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1(nvFFCFPATempDegKx10Lens1);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNvFFCFPATempDegKx10Lens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetFFCWarnTimeInSecx10(const uint16_t ffcWarnTime){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCWarnTimeInSecx10(ffcWarnTime);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCWarnTimeInSecx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetFFCWarnTimeInSecx10(uint16_t *ffcWarnTime){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCWarnTimeInSecx10(ffcWarnTime);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCWarnTimeInSecx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetOverTempEventCounter(uint32_t *overTempEventCounter){
	FLR_RESULT returncode = CLIENT_pkgBosonGetOverTempEventCounter(overTempEventCounter);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOverTempEventCounter()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetOverTempTimerInSec(const uint16_t overTempTimerInSec){
	FLR_RESULT returncode = CLIENT_pkgBosonSetOverTempTimerInSec(overTempTimerInSec);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOverTempTimerInSec()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetOverTempTimerInSec(uint16_t *overTempTimerInSec){
	FLR_RESULT returncode = CLIENT_pkgBosonGetOverTempTimerInSec(overTempTimerInSec);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOverTempTimerInSec()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonUnloadCurrentLensCorrections(){
	FLR_RESULT returncode = CLIENT_pkgBosonUnloadCurrentLensCorrections();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of UnloadCurrentLensCorrections()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetTimeForQuickFFCsInSecs(const uint32_t timeForQuickFFCsInSecs){
	FLR_RESULT returncode = CLIENT_pkgBosonSetTimeForQuickFFCsInSecs(timeForQuickFFCsInSecs);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTimeForQuickFFCsInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetTimeForQuickFFCsInSecs(uint32_t *timeForQuickFFCsInSecs){
	FLR_RESULT returncode = CLIENT_pkgBosonGetTimeForQuickFFCsInSecs(timeForQuickFFCsInSecs);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTimeForQuickFFCsInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonReloadCurrentLensCorrections(){
	FLR_RESULT returncode = CLIENT_pkgBosonReloadCurrentLensCorrections();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReloadCurrentLensCorrections()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetBootTimestamps(float *FirstLight, float *StartInit, float *BosonExecDone, float *Timestamp4){
	FLR_RESULT returncode = CLIENT_pkgBosonGetBootTimestamps(FirstLight, StartInit, BosonExecDone, Timestamp4);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetBootTimestamps()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonSetExtSyncMode(const FLR_BOSON_EXT_SYNC_MODE_E mode){
	FLR_RESULT returncode = CLIENT_pkgBosonSetExtSyncMode(mode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetExtSyncMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetExtSyncMode(FLR_BOSON_EXT_SYNC_MODE_E *mode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetExtSyncMode(mode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetExtSyncMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT bosonGetSensorHostCalVersion(uint32_t *version){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSensorHostCalVersion(version);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorHostCalVersion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState){
	FLR_RESULT returncode = CLIENT_pkgDvoSetAnalogVideoState(analogVideoState);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAnalogVideoState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState){
	FLR_RESULT returncode = CLIENT_pkgDvoGetAnalogVideoState(analogVideoState);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAnalogVideoState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputFormat(format);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputFormat()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputFormat(format);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputFormat()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputYCbCrSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputYCbCrSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputYCbCrSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputYCbCrSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputRGBSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputRGBSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputRGBSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputRGBSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoApplyCustomSettings(){
	FLR_RESULT returncode = CLIENT_pkgDvoApplyCustomSettings();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ApplyCustomSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode){
	FLR_RESULT returncode = CLIENT_pkgDvoSetDisplayMode(displayMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode){
	FLR_RESULT returncode = CLIENT_pkgDvoGetDisplayMode(displayMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetType(const FLR_DVO_TYPE_E tap){
	FLR_RESULT returncode = CLIENT_pkgDvoSetType(tap);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetType(FLR_DVO_TYPE_E *tap){
	FLR_RESULT returncode = CLIENT_pkgDvoGetType(tap);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetVideoStandard(const FLR_DVO_VIDEO_STANDARD_E videoStandard){
	FLR_RESULT returncode = CLIENT_pkgDvoSetVideoStandard(videoStandard);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetVideoStandard()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetVideoStandard(FLR_DVO_VIDEO_STANDARD_E *videoStandard){
	FLR_RESULT returncode = CLIENT_pkgDvoGetVideoStandard(videoStandard);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetVideoStandard()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoSetCheckVideoDacPresent(const FLR_ENABLE_E checkVideoDacPresent){
	FLR_RESULT returncode = CLIENT_pkgDvoSetCheckVideoDacPresent(checkVideoDacPresent);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetCheckVideoDacPresent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetCheckVideoDacPresent(FLR_ENABLE_E *checkVideoDacPresent){
	FLR_RESULT returncode = CLIENT_pkgDvoGetCheckVideoDacPresent(checkVideoDacPresent);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCheckVideoDacPresent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dvoGetClockInfo(uint32_t *horizontalSyncWidth, uint32_t *verticalSyncWidth, uint32_t *clocksPerRowPeriod, uint32_t *horizontalFrontPorch, uint32_t *horizontalBackPorch, uint32_t *frontTelemetryPixels, uint32_t *rearTelemetryPixels, uint32_t *videoColumns, uint32_t *validColumns, uint32_t *telemetryRows, uint32_t *videoRows, uint32_t *validRows, uint32_t *verticalFrontPorch, uint32_t *verticalBackPorch, uint32_t *rowPeriodsPerFrame, uint32_t *clocksPerFrame, float *clockRateInMHz, float *frameRateInHz, uint32_t *validOnRisingEdge, uint32_t *dataWidthInBits){
	FLR_RESULT returncode = CLIENT_pkgDvoGetClockInfo(horizontalSyncWidth, verticalSyncWidth, clocksPerRowPeriod, horizontalFrontPorch, horizontalBackPorch, frontTelemetryPixels, rearTelemetryPixels, videoColumns, validColumns, telemetryRows, videoRows, validRows, verticalFrontPorch, verticalBackPorch, rowPeriodsPerFrame, clocksPerFrame, clockRateInMHz, frameRateInHz, validOnRisingEdge, dataWidthInBits);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetClockInfo()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT captureSingleFrame(){
	FLR_RESULT returncode = CLIENT_pkgCaptureSingleFrame();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SingleFrame()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT captureFrames(const FLR_CAPTURE_SETTINGS_T data){
	FLR_RESULT returncode = CLIENT_pkgCaptureFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Frames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT captureSingleFrameWithSrc(const FLR_CAPTURE_SRC_E data){
	FLR_RESULT returncode = CLIENT_pkgCaptureSingleFrameWithSrc(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SingleFrameWithSrc()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT captureSingleFrameToFile(){
	FLR_RESULT returncode = CLIENT_pkgCaptureSingleFrameToFile();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SingleFrameToFile()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetThColSum(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThColSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThColSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetThColSum(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThColSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThColSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetThPixel(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetThPixel(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetMaxCorr(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetMaxCorr(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetThPixelApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThPixelApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixelApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetMaxCorrApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetMaxCorrApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorrApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetThColSumSafe(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThColSumSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThColSumSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetThColSumSafe(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThColSumSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThColSumSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetThPixelSafe(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThPixelSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThPixelSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetThPixelSafe(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThPixelSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixelSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrSetMaxCorrSafe(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetMaxCorrSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxCorrSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scnrGetMaxCorrSafe(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetMaxCorrSafe(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorrSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetPercentPerBin(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetPercentPerBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPercentPerBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetPercentPerBin(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetPercentPerBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPercentPerBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetLinearPercent(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetLinearPercent(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLinearPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetLinearPercent(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetLinearPercent(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLinearPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetOutlierCut(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetOutlierCut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutlierCut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetOutlierCut(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetOutlierCut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutlierCut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetDrOut(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetDrOut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDrOut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetMaxGain(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetMaxGain(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetMaxGain(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetMaxGain(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetdf(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetdf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Setdf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetdf(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetdf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Getdf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetGamma(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetGamma(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGamma()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetGamma(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetGamma(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGamma()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetFirstBin(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetFirstBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFirstBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetLastBin(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetLastBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetDetailHeadroom(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetDetailHeadroom(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDetailHeadroom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetDetailHeadroom(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetDetailHeadroom(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDetailHeadroom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetd2br(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetd2br(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Setd2br()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetd2br(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetd2br(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Getd2br()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetSigmaR(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetSigmaR(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSigmaR()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetSigmaR(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetSigmaR(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSigmaR()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetUseEntropy(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetUseEntropy(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetUseEntropy()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetUseEntropy(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetUseEntropy(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetUseEntropy()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetROI(const FLR_ROI_T roi){
	FLR_RESULT returncode = CLIENT_pkgAgcSetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetROI(FLR_ROI_T *roi){
	FLR_RESULT returncode = CLIENT_pkgAgcGetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetMaxGainApplied(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetMaxGainApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxGainApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetSigmaRApplied(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetSigmaRApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSigmaRApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcSetOutlierCutBalance(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetOutlierCutBalance(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutlierCutBalance()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetOutlierCutBalance(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetOutlierCutBalance(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutlierCutBalance()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT agcGetOutlierCutApplied(float *percentHigh, float *percentLow){
	FLR_RESULT returncode = CLIENT_pkgAgcGetOutlierCutApplied(percentHigh, percentLow);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutlierCutApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTfSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfSetDelta_nf(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetDelta_nf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDelta_nf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetDelta_nf(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetDelta_nf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDelta_nf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfSetTHDeltaMotion(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetTHDeltaMotion(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTHDeltaMotion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetTHDeltaMotion(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetTHDeltaMotion(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTHDeltaMotion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfSetWLut(const FLR_TF_WLUT_T data){
	FLR_RESULT returncode = CLIENT_pkgTfSetWLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetWLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetWLut(FLR_TF_WLUT_T *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetWLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetWLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetMotionCount(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionCount(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfSetMotionThreshold(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetMotionThreshold(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetDelta_nfApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetDelta_nfApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDelta_nfApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT tfGetTHDeltaMotionApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetTHDeltaMotionApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTHDeltaMotionApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemReadCapture(bufferNum, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadCapture()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns){
	FLR_RESULT returncode = CLIENT_pkgMemGetCaptureSize(bytes, rows, columns);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCaptureSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemWriteFlash(location, index, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemReadFlash(location, index, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes){
	FLR_RESULT returncode = CLIENT_pkgMemGetFlashSize(location, bytes);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFlashSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index){
	FLR_RESULT returncode = CLIENT_pkgMemEraseFlash(location, index);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of EraseFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length){
	FLR_RESULT returncode = CLIENT_pkgMemEraseFlashPartial(location, index, offset, length);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of EraseFlashPartial()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memReadCurrentGain(const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemReadCurrentGain(offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadCurrentGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT memGetGainSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns){
	FLR_RESULT returncode = CLIENT_pkgMemGetGainSize(bytes, rows, columns);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT colorLutSetControl(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgColorlutSetControl(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetControl()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT colorLutGetControl(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgColorlutGetControl(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetControl()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT colorLutSetId(const FLR_COLORLUT_ID_E data){
	FLR_RESULT returncode = CLIENT_pkgColorlutSetId(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetId()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT colorLutGetId(FLR_COLORLUT_ID_E *data){
	FLR_RESULT returncode = CLIENT_pkgColorlutGetId(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetId()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetState(FLR_SPNR_STATE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetFrameDelay(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetFrameDelay(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFrameDelay()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetFrameDelay(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetFrameDelay(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFrameDelay()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetSFApplied(float *sf){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetSFApplied(sf);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSFApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetPSDKernel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPSDKernel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetPSDKernel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPSDKernel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetSFMin(const float sfmin){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetSFMin(sfmin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetSFMin(float *sfmin){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetSFMin(sfmin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetSFMax(const float sfmax){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetSFMax(sfmax);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetSFMax(float *sfmax){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetSFMax(sfmax);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetDFMin(const float dfmin){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetDFMin(dfmin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetDFMin(float *dfmin){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetDFMin(dfmin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetDFMax(const float dfmax){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetDFMax(dfmax);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetDFMax(float *dfmax){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetDFMax(dfmax);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrSetNormTarget(const float normTarget){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetNormTarget(normTarget);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetNormTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetNormTarget(float *normTarget){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetNormTarget(normTarget);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNormTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT spnrGetNormTargetApplied(float *normTargetApplied){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetNormTargetApplied(normTargetApplied);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNormTargetApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scalerGetMaxZoom(uint32_t *zoom){
	FLR_RESULT returncode = CLIENT_pkgScalerGetMaxZoom(zoom);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams){
	FLR_RESULT returncode = CLIENT_pkgScalerSetZoom(zoomParams);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams){
	FLR_RESULT returncode = CLIENT_pkgScalerGetZoom(zoomParams);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scalerSetFractionalZoom(const uint32_t zoomNumerator, const uint32_t zoomDenominator, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable){
	FLR_RESULT returncode = CLIENT_pkgScalerSetFractionalZoom(zoomNumerator, zoomDenominator, zoomXCenter, zoomYCenter, inChangeEnable, zoomOutXCenter, zoomOutYCenter, outChangeEnable);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFractionalZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT scalerSetIndexZoom(const uint32_t zoomIndex, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable){
	FLR_RESULT returncode = CLIENT_pkgScalerSetIndexZoom(zoomIndex, zoomXCenter, zoomYCenter, inChangeEnable, zoomOutXCenter, zoomOutYCenter, outChangeEnable);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIndexZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sysctrlSetFreezeState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSysctrlSetFreezeState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFreezeState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sysctrlGetFreezeState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSysctrlGetFreezeState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFreezeState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sysctrlGetCameraFrameRate(uint32_t *frameRate){
	FLR_RESULT returncode = CLIENT_pkgSysctrlGetCameraFrameRate(frameRate);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraFrameRate()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetType(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetType(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetSettings(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetSettings(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampSetMotionState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampGetMotionState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampSetIndex(const uint8_t data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampGetIndex(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT testRampGetMaxIndex(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetMaxIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologySetEnable(const FLR_ENABLE_E draw_symbols){
	FLR_RESULT returncode = CLIENT_pkgSymbologySetEnable(draw_symbols);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateBitmap(ID, pos_X, pos_Y, width, height);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateBitmap()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologySendData(const uint8_t ID, const int16_t size, const uint8_t text[]){
	FLR_RESULT returncode = CLIENT_pkgSymbologySendData(ID, size, text);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SendData()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateArc(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const float start_angle, const float end_angle, const uint32_t color){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateArc(ID, pos_X, pos_Y, width, height, start_angle, end_angle, color);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateArc()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateText(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint8_t text[]){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateText(ID, pos_X, pos_Y, width, height, font, size, alignment, color, text);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateText()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyMoveSprite(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y){
	FLR_RESULT returncode = CLIENT_pkgSymbologyMoveSprite(ID, pos_X, pos_Y);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of MoveSprite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyAddToGroup(const uint8_t ID, const uint8_t group_ID){
	FLR_RESULT returncode = CLIENT_pkgSymbologyAddToGroup(ID, group_ID);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of AddToGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyRemoveFromGroup(const uint8_t ID, const uint8_t group_ID){
	FLR_RESULT returncode = CLIENT_pkgSymbologyRemoveFromGroup(ID, group_ID);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RemoveFromGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyUpdateAndShow(const uint8_t ID, const uint8_t visible){
	FLR_RESULT returncode = CLIENT_pkgSymbologyUpdateAndShow(ID, visible);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of UpdateAndShow()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyUpdateAndShowGroup(const uint8_t group_ID, const uint8_t visible){
	FLR_RESULT returncode = CLIENT_pkgSymbologyUpdateAndShowGroup(group_ID, visible);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of UpdateAndShowGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyDelete(const uint8_t ID){
	FLR_RESULT returncode = CLIENT_pkgSymbologyDelete(ID);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Delete()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyDeleteGroup(const uint8_t group_ID){
	FLR_RESULT returncode = CLIENT_pkgSymbologyDeleteGroup(group_ID);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of DeleteGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateFilledRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateFilledRectangle(ID, pos_X, pos_Y, width, height, color);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateFilledRectangle()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateOutlinedRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateOutlinedRectangle(ID, pos_X, pos_Y, width, height, color);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateOutlinedRectangle()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateBitmapFromPng(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t size){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateBitmapFromPng(ID, pos_X, pos_Y, size);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateBitmapFromPng()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateCompressedBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateCompressedBitmap(ID, pos_X, pos_Y, width, height);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateCompressedBitmap()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateBitmapFromPngFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[]){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateBitmapFromPngFile(ID, pos_X, pos_Y, path);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateBitmapFromPngFile()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyResetWritePosition(const uint8_t ID){
	FLR_RESULT returncode = CLIENT_pkgSymbologyResetWritePosition(ID);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ResetWritePosition()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyMoveByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y){
	FLR_RESULT returncode = CLIENT_pkgSymbologyMoveByOffset(ID, off_X, off_Y);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of MoveByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyMoveGroupByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y){
	FLR_RESULT returncode = CLIENT_pkgSymbologyMoveGroupByOffset(ID, off_X, off_Y);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of MoveGroupByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateFilledEllipse(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateFilledEllipse(ID, pos_X, pos_Y, width, height, color);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateFilledEllipse()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyCreateLine(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color){
	FLR_RESULT returncode = CLIENT_pkgSymbologyCreateLine(ID, pos_X, pos_Y, pos_X2, pos_Y2, color);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CreateLine()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologySetZorder(const uint8_t ID, const uint8_t zorder){
	FLR_RESULT returncode = CLIENT_pkgSymbologySetZorder(ID, zorder);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetZorder()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologySaveConfiguration(){
	FLR_RESULT returncode = CLIENT_pkgSymbologySaveConfiguration();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SaveConfiguration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyReloadConfiguration(){
	FLR_RESULT returncode = CLIENT_pkgSymbologyReloadConfiguration();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReloadConfiguration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyGetEnable(FLR_ENABLE_E *draw_symbols){
	FLR_RESULT returncode = CLIENT_pkgSymbologyGetEnable(draw_symbols);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologySetClonesNumber(const uint8_t ID, const uint8_t numberOfClones){
	FLR_RESULT returncode = CLIENT_pkgSymbologySetClonesNumber(ID, numberOfClones);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetClonesNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyMoveCloneByOffset(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y){
	FLR_RESULT returncode = CLIENT_pkgSymbologyMoveCloneByOffset(ID, cloneID, pos_X, pos_Y);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of MoveCloneByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT symbologyMoveCloneSprite(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y){
	FLR_RESULT returncode = CLIENT_pkgSymbologyMoveCloneSprite(ID, cloneID, pos_X, pos_Y);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of MoveCloneSprite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsDir(uint8_t dirent[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsDir(dirent);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Dir()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsCd(const uint8_t path[], uint8_t pwd[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsCd(path, pwd);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Cd()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsMd(const uint8_t path[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsMd(path);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Md()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFopen(const uint8_t path[], const uint8_t mode[], uint32_t *id){
	FLR_RESULT returncode = CLIENT_pkgFileopsFopen(path, mode, id);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Fopen()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFclose(const uint32_t id){
	FLR_RESULT returncode = CLIENT_pkgFileopsFclose(id);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Fclose()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFread(const uint32_t id, const uint32_t length, uint8_t buf[], uint32_t *ret){
	FLR_RESULT returncode = CLIENT_pkgFileopsFread(id, length, buf, ret);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Fread()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFwrite(const uint32_t id, const uint32_t length, const uint8_t buf[], uint32_t *ret){
	FLR_RESULT returncode = CLIENT_pkgFileopsFwrite(id, length, buf, ret);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Fwrite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFtell(const uint32_t id, uint32_t *offset){
	FLR_RESULT returncode = CLIENT_pkgFileopsFtell(id, offset);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Ftell()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFseek(const uint32_t id, const uint32_t offset, const uint32_t origin){
	FLR_RESULT returncode = CLIENT_pkgFileopsFseek(id, offset, origin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Fseek()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsFtruncate(const uint32_t id, const uint32_t length){
	FLR_RESULT returncode = CLIENT_pkgFileopsFtruncate(id, length);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Ftruncate()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsRmdir(const uint8_t path[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsRmdir(path);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Rmdir()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsRm(const uint8_t path[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsRm(path);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Rm()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsRename(const uint8_t oldpath[], const uint8_t newpath[]){
	FLR_RESULT returncode = CLIENT_pkgFileopsRename(oldpath, newpath);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Rename()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT fileOpsGetFileSize(const uint8_t path[], uint32_t *fileLength){
	FLR_RESULT returncode = CLIENT_pkgFileopsGetFileSize(path, fileLength);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFileSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT jffs2Mount(){
	FLR_RESULT returncode = CLIENT_pkgJffs2Mount();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Mount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT jffs2Unmount(){
	FLR_RESULT returncode = CLIENT_pkgJffs2Unmount();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Unmount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT jffs2GetState(FLR_JFFS2_STATE_E *state){
	FLR_RESULT returncode = CLIENT_pkgJffs2GetState(state);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenSetDuration(const uint32_t screen_num, const uint32_t periodMs){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenSetDuration(screen_num, periodMs);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDuration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenSetDataType(const uint32_t screen_num, const FLR_SPLASHSCREEN_FILETYPE_E filetype){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenSetDataType(screen_num, filetype);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDataType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenSetBackground(const uint32_t screen_num, const uint32_t backgroundColor){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenSetBackground(screen_num, backgroundColor);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetBackground()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenGetDuration(const uint32_t screen_num, uint32_t *periodMs){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenGetDuration(screen_num, periodMs);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDuration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenGetDataType(const uint32_t screen_num, FLR_SPLASHSCREEN_FILETYPE_E *filetype){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenGetDataType(screen_num, filetype);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDataType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT splashScreenGetBackground(const uint32_t screen_num, uint32_t *backgroundColor){
	FLR_RESULT returncode = CLIENT_pkgSplashscreenGetBackground(screen_num, backgroundColor);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetBackground()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT systemSymbolsGetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, uint8_t *id, FLR_SYSTEMSYMBOLS_ID_TYPE_E *id_type){
	FLR_RESULT returncode = CLIENT_pkgSystemsymbolsGetID(symbol, id, id_type);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetID()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT systemSymbolsSetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const uint8_t id, const FLR_SYSTEMSYMBOLS_ID_TYPE_E id_type){
	FLR_RESULT returncode = CLIENT_pkgSystemsymbolsSetID(symbol, id, id_type);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetID()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT systemSymbolsGetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, FLR_ENABLE_E *enabled){
	FLR_RESULT returncode = CLIENT_pkgSystemsymbolsGetEnable(symbol, enabled);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT systemSymbolsSetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const FLR_ENABLE_E enabled){
	FLR_RESULT returncode = CLIENT_pkgSystemsymbolsSetEnable(symbol, enabled);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetScaleFactor(float *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetScaleFactor(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetScaleFactor()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetDeltaTempLinearCoeff(float *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetDeltaTempLinearCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDeltaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcSetDeltaTempLinearCoeff(const float data){
	FLR_RESULT returncode = CLIENT_pkgSffcSetDeltaTempLinearCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDeltaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetDeltaTempOffsetCoeff(float *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetDeltaTempOffsetCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDeltaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcSetDeltaTempOffsetCoeff(const float data){
	FLR_RESULT returncode = CLIENT_pkgSffcSetDeltaTempOffsetCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDeltaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetFpaTempLinearCoeff(float *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetFpaTempLinearCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFpaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcSetFpaTempLinearCoeff(const float data){
	FLR_RESULT returncode = CLIENT_pkgSffcSetFpaTempLinearCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFpaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetFpaTempOffsetCoeff(float *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetFpaTempOffsetCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFpaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcSetFpaTempOffsetCoeff(const float data){
	FLR_RESULT returncode = CLIENT_pkgSffcSetFpaTempOffsetCoeff(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFpaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcGetDeltaTempTimeLimitInSecs(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDeltaTempTimeLimitInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT sffcSetDeltaTempTimeLimitInSecs(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDeltaTempTimeLimitInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetTotalHistPixelsInROI(uint32_t *totalPixelsInROI){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetTotalHistPixelsInROI(totalPixelsInROI);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTotalHistPixelsInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetPopBelowLowToHighThresh(uint32_t *popBelowLowToHighThresh){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetPopBelowLowToHighThresh(popBelowLowToHighThresh);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPopBelowLowToHighThresh()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetPopAboveHighToLowThresh(uint32_t *popAboveHighToLowThresh){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetPopAboveHighToLowThresh(popAboveHighToLowThresh);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPopAboveHighToLowThresh()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsSetROI(const FLR_ROI_T roi){
	FLR_RESULT returncode = CLIENT_pkgImagestatsSetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetROI(FLR_ROI_T *roi){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetFirstBin(uint16_t *firstBin){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetFirstBin(firstBin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFirstBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetLastBin(uint16_t *lastBin){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetLastBin(lastBin);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetMean(uint16_t *mean){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetMean(mean);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMean()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetFirstBinInROI(uint16_t *firstBinInROI){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetFirstBinInROI(firstBinInROI);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFirstBinInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetLastBinInROI(uint16_t *lastBinInROI){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetLastBinInROI(lastBinInROI);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastBinInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT imageStatsGetMeanInROI(uint16_t *meanInROI){
	FLR_RESULT returncode = CLIENT_pkgImagestatsGetMeanInROI(meanInROI);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMeanInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSrnrSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrSetThRowSum(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgSrnrSetThRowSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThRowSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetThRowSum(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetThRowSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThRowSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrSetThPixel(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgSrnrSetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetThPixel(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrSetMaxCorr(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgSrnrSetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetMaxCorr(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetThPixelApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetThPixelApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixelApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT srnrGetMaxCorrApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSrnrGetMaxCorrApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorrApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT dummyBadCommand(){
	FLR_RESULT returncode = CLIENT_pkgDummyBadCommand();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of BadCommand()

