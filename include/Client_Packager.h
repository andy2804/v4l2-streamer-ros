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

#ifndef CLIENT_PACKAGER_H
#define CLIENT_PACKAGER_H

#include <stdint.h>
#include "EnumTypes.h"
#include "ReturnCodes.h"
#include "Serializer_Struct.h"
#include "FunctionCodes.h"
#include "Client_Dispatcher.h"

// Begin Module: gao
FLR_RESULT CLIENT_pkgGaoSetGainState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetGainState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetFfcState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetFfcState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetTempCorrectionState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetTempCorrectionState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetIConstL(const int16_t data);
FLR_RESULT CLIENT_pkgGaoGetIConstL(int16_t *data);
FLR_RESULT CLIENT_pkgGaoSetIConstM(const int16_t data);
FLR_RESULT CLIENT_pkgGaoGetIConstM(int16_t *data);
FLR_RESULT CLIENT_pkgGaoSetAveragerState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetAveragerState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetNumFFCFrames(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetNumFFCFrames(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoGetAveragerThreshold(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetRnsState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetTestRampState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetTestRampState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetSffcState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetSffcState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetRpmState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetRpmState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoGetRpmThreshold(uint16_t *threshold);
FLR_RESULT CLIENT_pkgGaoSetFfcZeroMeanState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetFfcZeroMeanState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetRnsPopThreshold(const uint16_t threshold);
FLR_RESULT CLIENT_pkgGaoGetRnsPopThreshold(uint16_t *threshold);
FLR_RESULT CLIENT_pkgGaoSetRnsCloseThreshold(const uint16_t threshold);
FLR_RESULT CLIENT_pkgGaoGetRnsCloseThreshold(uint16_t *threshold);
FLR_RESULT CLIENT_pkgGaoSetRnsTooFewQuit(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsTooFewQuit(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsTooFew(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsTooFew(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsMinCorrection(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsMinCorrection(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsDamping(const uint8_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsDamping(uint8_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsFrameHysteresis(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsFrameHysteresis(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsBadDamping(const uint8_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsBadDamping(uint8_t *data);
FLR_RESULT CLIENT_pkgGaoSetRnsNumGoodDampingThreshold(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetRnsNumGoodDampingThreshold(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoGetRnsFfcDesired(uint32_t *data);
// End Module: gao

// Begin Module: lagrange
// End Module: lagrange

// Begin Module: roic
FLR_RESULT CLIENT_pkgRoicGetFPATemp(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicGetFrameCount(uint32_t *data);
FLR_RESULT CLIENT_pkgRoicGetActiveNormalizationTarget(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicSetFPARampState(const FLR_ENABLE_E state);
FLR_RESULT CLIENT_pkgRoicGetFPARampState(FLR_ENABLE_E *state);
FLR_RESULT CLIENT_pkgRoicGetSensorADC1(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicGetSensorADC2(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicSetFPATempOffset(const int16_t data);
FLR_RESULT CLIENT_pkgRoicGetFPATempOffset(int16_t *data);
FLR_RESULT CLIENT_pkgRoicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data);
FLR_RESULT CLIENT_pkgRoicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data);
FLR_RESULT CLIENT_pkgRoicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table);
FLR_RESULT CLIENT_pkgRoicSetFPATempValue(const uint16_t data);
FLR_RESULT CLIENT_pkgRoicGetFPATempValue(uint16_t *data);
// End Module: roic

// Begin Module: bpr
FLR_RESULT CLIENT_pkgBprSetState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgBprGetState(FLR_ENABLE_E *data);
// End Module: bpr

// Begin Module: telemetry
FLR_RESULT CLIENT_pkgTelemetrySetState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTelemetryGetState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTelemetrySetLocation(const FLR_TELEMETRY_LOC_E data);
FLR_RESULT CLIENT_pkgTelemetryGetLocation(FLR_TELEMETRY_LOC_E *data);
FLR_RESULT CLIENT_pkgTelemetrySetPacking(const FLR_TELEMETRY_PACKING_E data);
FLR_RESULT CLIENT_pkgTelemetryGetPacking(FLR_TELEMETRY_PACKING_E *data);
// End Module: telemetry

// Begin Module: boson
FLR_RESULT CLIENT_pkgBosonGetCameraSN(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data);
FLR_RESULT CLIENT_pkgBosonGetSensorSN(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonRunFFC();
FLR_RESULT CLIENT_pkgBosonSetFFCTempThreshold(const uint16_t data);
FLR_RESULT CLIENT_pkgBosonGetFFCTempThreshold(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonSetFFCFrameThreshold(const uint32_t data);
FLR_RESULT CLIENT_pkgBosonGetFFCFrameThreshold(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonGetFFCInProgress(int16_t *data);
FLR_RESULT CLIENT_pkgBosonReboot();
FLR_RESULT CLIENT_pkgBosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode);
FLR_RESULT CLIENT_pkgBosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode);
FLR_RESULT CLIENT_pkgBosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode);
FLR_RESULT CLIENT_pkgBosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode);
FLR_RESULT CLIENT_pkgBosonWriteDynamicHeaderToFlash();
FLR_RESULT CLIENT_pkgBosonReadDynamicHeaderFromFlash();
FLR_RESULT CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash();
FLR_RESULT CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash();
FLR_RESULT CLIENT_pkgBosonWriteBadPixelsToFlash();
FLR_RESULT CLIENT_pkgBosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch);
FLR_RESULT CLIENT_pkgBosonSetBadPixelLocation(const uint32_t row, const uint32_t col);
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegCx10(int16_t *data);
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegKx10(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonWriteLensNvFfcToFlash();
FLR_RESULT CLIENT_pkgBosonWriteLensGainToFlash();
FLR_RESULT CLIENT_pkgBosonSetLensNumber(const uint32_t lensNumber);
FLR_RESULT CLIENT_pkgBosonGetLensNumber(uint32_t *lensNumber);
FLR_RESULT CLIENT_pkgBosonSetTableNumber(const uint32_t tableNumber);
FLR_RESULT CLIENT_pkgBosonGetTableNumber(uint32_t *tableNumber);
FLR_RESULT CLIENT_pkgBosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN);
FLR_RESULT CLIENT_pkgBosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct);
FLR_RESULT CLIENT_pkgBosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct);
FLR_RESULT CLIENT_pkgBosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag);
FLR_RESULT CLIENT_pkgBosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag);
FLR_RESULT CLIENT_pkgBosonGetCLowToHighPercent(uint32_t *cLowToHighPercent);
FLR_RESULT CLIENT_pkgBosonGetMaxNUCTables(uint32_t *maxNUCTables);
FLR_RESULT CLIENT_pkgBosonGetMaxLensTables(uint32_t *maxLensTables);
FLR_RESULT CLIENT_pkgBosonGetFfcWaitCloseFrames(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonSetFfcWaitCloseFrames(const uint16_t data);
FLR_RESULT CLIENT_pkgBosonCheckForTableSwitch();
FLR_RESULT CLIENT_pkgBosonGetDesiredTableNumber(uint32_t *desiredTableNumber);
FLR_RESULT CLIENT_pkgBosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus);
FLR_RESULT CLIENT_pkgBosonGetFfcDesired(uint32_t *ffcDesired);
FLR_RESULT CLIENT_pkgBosonGetLastFFCFrameCount(uint32_t *frameCount);
FLR_RESULT CLIENT_pkgBosonGetLastFFCTempDegKx10(uint16_t *temp);
FLR_RESULT CLIENT_pkgBosonGetTableSwitchDesired(uint16_t *tableSwitchDesired);
FLR_RESULT CLIENT_pkgBosonGetOverTempThreshold(float *temperatureInC);
FLR_RESULT CLIENT_pkgBosonGetLowPowerMode(uint16_t *lowPowerMode);
FLR_RESULT CLIENT_pkgBosonGetOverTempEventOccurred(uint16_t *overTempEventOccurred);
FLR_RESULT CLIENT_pkgBosonSetPermitThermalShutdownOverride(const FLR_ENABLE_E permitThermalShutdownOverride);
FLR_RESULT CLIENT_pkgBosonGetPermitThermalShutdownOverride(FLR_ENABLE_E *permitThermalShutdownOverride);
FLR_RESULT CLIENT_pkgBosonGetMyriadTemp(float *myriadTemp);
FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens0(int32_t *nvFFCNucTableNumberLens0);
FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens1(int32_t *nvFFCNucTableNumberLens1);
FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0(uint16_t *nvFFCFPATempDegKx10Lens0);
FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1(uint16_t *nvFFCFPATempDegKx10Lens1);
FLR_RESULT CLIENT_pkgBosonSetFFCWarnTimeInSecx10(const uint16_t ffcWarnTime);
FLR_RESULT CLIENT_pkgBosonGetFFCWarnTimeInSecx10(uint16_t *ffcWarnTime);
FLR_RESULT CLIENT_pkgBosonGetOverTempEventCounter(uint32_t *overTempEventCounter);
FLR_RESULT CLIENT_pkgBosonSetOverTempTimerInSec(const uint16_t overTempTimerInSec);
FLR_RESULT CLIENT_pkgBosonGetOverTempTimerInSec(uint16_t *overTempTimerInSec);
FLR_RESULT CLIENT_pkgBosonUnloadCurrentLensCorrections();
FLR_RESULT CLIENT_pkgBosonSetTimeForQuickFFCsInSecs(const uint32_t timeForQuickFFCsInSecs);
FLR_RESULT CLIENT_pkgBosonGetTimeForQuickFFCsInSecs(uint32_t *timeForQuickFFCsInSecs);
FLR_RESULT CLIENT_pkgBosonReloadCurrentLensCorrections();
FLR_RESULT CLIENT_pkgBosonGetBootTimestamps(float *FirstLight, float *StartInit, float *BosonExecDone, float *Timestamp4);
FLR_RESULT CLIENT_pkgBosonSetExtSyncMode(const FLR_BOSON_EXT_SYNC_MODE_E mode);
FLR_RESULT CLIENT_pkgBosonGetExtSyncMode(FLR_BOSON_EXT_SYNC_MODE_E *mode);
FLR_RESULT CLIENT_pkgBosonGetSensorHostCalVersion(uint32_t *version);
// End Module: boson

// Begin Module: dvo
FLR_RESULT CLIENT_pkgDvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState);
FLR_RESULT CLIENT_pkgDvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState);
FLR_RESULT CLIENT_pkgDvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format);
FLR_RESULT CLIENT_pkgDvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format);
FLR_RESULT CLIENT_pkgDvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings);
FLR_RESULT CLIENT_pkgDvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings);
FLR_RESULT CLIENT_pkgDvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings);
FLR_RESULT CLIENT_pkgDvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings);
FLR_RESULT CLIENT_pkgDvoApplyCustomSettings();
FLR_RESULT CLIENT_pkgDvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode);
FLR_RESULT CLIENT_pkgDvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode);
FLR_RESULT CLIENT_pkgDvoSetType(const FLR_DVO_TYPE_E tap);
FLR_RESULT CLIENT_pkgDvoGetType(FLR_DVO_TYPE_E *tap);
FLR_RESULT CLIENT_pkgDvoSetVideoStandard(const FLR_DVO_VIDEO_STANDARD_E videoStandard);
FLR_RESULT CLIENT_pkgDvoGetVideoStandard(FLR_DVO_VIDEO_STANDARD_E *videoStandard);
FLR_RESULT CLIENT_pkgDvoSetCheckVideoDacPresent(const FLR_ENABLE_E checkVideoDacPresent);
FLR_RESULT CLIENT_pkgDvoGetCheckVideoDacPresent(FLR_ENABLE_E *checkVideoDacPresent);
FLR_RESULT CLIENT_pkgDvoGetClockInfo(uint32_t *horizontalSyncWidth, uint32_t *verticalSyncWidth, uint32_t *clocksPerRowPeriod, uint32_t *horizontalFrontPorch, uint32_t *horizontalBackPorch, uint32_t *frontTelemetryPixels, uint32_t *rearTelemetryPixels, uint32_t *videoColumns, uint32_t *validColumns, uint32_t *telemetryRows, uint32_t *videoRows, uint32_t *validRows, uint32_t *verticalFrontPorch, uint32_t *verticalBackPorch, uint32_t *rowPeriodsPerFrame, uint32_t *clocksPerFrame, float *clockRateInMHz, float *frameRateInHz, uint32_t *validOnRisingEdge, uint32_t *dataWidthInBits);
// End Module: dvo

// Begin Module: capture
FLR_RESULT CLIENT_pkgCaptureSingleFrame();
FLR_RESULT CLIENT_pkgCaptureFrames(const FLR_CAPTURE_SETTINGS_T data);
FLR_RESULT CLIENT_pkgCaptureSingleFrameWithSrc(const FLR_CAPTURE_SRC_E data);
FLR_RESULT CLIENT_pkgCaptureSingleFrameToFile();
// End Module: capture

// Begin Module: scnr
FLR_RESULT CLIENT_pkgScnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgScnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgScnrSetThColSum(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThColSum(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetThPixel(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThPixel(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetMaxCorr(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetMaxCorr(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrGetThPixelApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrGetMaxCorrApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetThColSumSafe(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThColSumSafe(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetThPixelSafe(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThPixelSafe(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetMaxCorrSafe(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetMaxCorrSafe(uint16_t *data);
// End Module: scnr

// Begin Module: agc
FLR_RESULT CLIENT_pkgAgcSetPercentPerBin(const float data);
FLR_RESULT CLIENT_pkgAgcGetPercentPerBin(float *data);
FLR_RESULT CLIENT_pkgAgcSetLinearPercent(const float data);
FLR_RESULT CLIENT_pkgAgcGetLinearPercent(float *data);
FLR_RESULT CLIENT_pkgAgcSetOutlierCut(const float data);
FLR_RESULT CLIENT_pkgAgcGetOutlierCut(float *data);
FLR_RESULT CLIENT_pkgAgcGetDrOut(float *data);
FLR_RESULT CLIENT_pkgAgcSetMaxGain(const float data);
FLR_RESULT CLIENT_pkgAgcGetMaxGain(float *data);
FLR_RESULT CLIENT_pkgAgcSetdf(const float data);
FLR_RESULT CLIENT_pkgAgcGetdf(float *data);
FLR_RESULT CLIENT_pkgAgcSetGamma(const float data);
FLR_RESULT CLIENT_pkgAgcGetGamma(float *data);
FLR_RESULT CLIENT_pkgAgcGetFirstBin(uint32_t *data);
FLR_RESULT CLIENT_pkgAgcGetLastBin(uint32_t *data);
FLR_RESULT CLIENT_pkgAgcSetDetailHeadroom(const float data);
FLR_RESULT CLIENT_pkgAgcGetDetailHeadroom(float *data);
FLR_RESULT CLIENT_pkgAgcSetd2br(const float data);
FLR_RESULT CLIENT_pkgAgcGetd2br(float *data);
FLR_RESULT CLIENT_pkgAgcSetSigmaR(const float data);
FLR_RESULT CLIENT_pkgAgcGetSigmaR(float *data);
FLR_RESULT CLIENT_pkgAgcSetUseEntropy(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgAgcGetUseEntropy(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgAgcSetROI(const FLR_ROI_T roi);
FLR_RESULT CLIENT_pkgAgcGetROI(FLR_ROI_T *roi);
FLR_RESULT CLIENT_pkgAgcGetMaxGainApplied(float *data);
FLR_RESULT CLIENT_pkgAgcGetSigmaRApplied(float *data);
FLR_RESULT CLIENT_pkgAgcSetOutlierCutBalance(const float data);
FLR_RESULT CLIENT_pkgAgcGetOutlierCutBalance(float *data);
FLR_RESULT CLIENT_pkgAgcGetOutlierCutApplied(float *percentHigh, float *percentLow);
// End Module: agc

// Begin Module: tf
FLR_RESULT CLIENT_pkgTfSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTfGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTfSetDelta_nf(const uint16_t data);
FLR_RESULT CLIENT_pkgTfGetDelta_nf(uint16_t *data);
FLR_RESULT CLIENT_pkgTfSetTHDeltaMotion(const uint16_t data);
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotion(uint16_t *data);
FLR_RESULT CLIENT_pkgTfSetWLut(const FLR_TF_WLUT_T data);
FLR_RESULT CLIENT_pkgTfGetWLut(FLR_TF_WLUT_T *data);
FLR_RESULT CLIENT_pkgTfGetMotionCount(uint32_t *data);
FLR_RESULT CLIENT_pkgTfSetMotionThreshold(const uint32_t data);
FLR_RESULT CLIENT_pkgTfGetMotionThreshold(uint32_t *data);
FLR_RESULT CLIENT_pkgTfGetDelta_nfApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotionApplied(uint16_t *data);
// End Module: tf

// Begin Module: mem
FLR_RESULT CLIENT_pkgMemReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
FLR_RESULT CLIENT_pkgMemWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes);
FLR_RESULT CLIENT_pkgMemEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index);
FLR_RESULT CLIENT_pkgMemEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length);
FLR_RESULT CLIENT_pkgMemReadCurrentGain(const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemGetGainSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
// End Module: mem

// Begin Module: colorLut
FLR_RESULT CLIENT_pkgColorlutSetControl(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgColorlutGetControl(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgColorlutSetId(const FLR_COLORLUT_ID_E data);
FLR_RESULT CLIENT_pkgColorlutGetId(FLR_COLORLUT_ID_E *data);
// End Module: colorLut

// Begin Module: spnr
FLR_RESULT CLIENT_pkgSpnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSpnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSpnrGetState(FLR_SPNR_STATE_E *data);
FLR_RESULT CLIENT_pkgSpnrSetFrameDelay(const uint32_t data);
FLR_RESULT CLIENT_pkgSpnrGetFrameDelay(uint32_t *data);
FLR_RESULT CLIENT_pkgSpnrGetSFApplied(float *sf);
FLR_RESULT CLIENT_pkgSpnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data);
FLR_RESULT CLIENT_pkgSpnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data);
FLR_RESULT CLIENT_pkgSpnrSetSFMin(const float sfmin);
FLR_RESULT CLIENT_pkgSpnrGetSFMin(float *sfmin);
FLR_RESULT CLIENT_pkgSpnrSetSFMax(const float sfmax);
FLR_RESULT CLIENT_pkgSpnrGetSFMax(float *sfmax);
FLR_RESULT CLIENT_pkgSpnrSetDFMin(const float dfmin);
FLR_RESULT CLIENT_pkgSpnrGetDFMin(float *dfmin);
FLR_RESULT CLIENT_pkgSpnrSetDFMax(const float dfmax);
FLR_RESULT CLIENT_pkgSpnrGetDFMax(float *dfmax);
FLR_RESULT CLIENT_pkgSpnrSetNormTarget(const float normTarget);
FLR_RESULT CLIENT_pkgSpnrGetNormTarget(float *normTarget);
FLR_RESULT CLIENT_pkgSpnrGetNormTargetApplied(float *normTargetApplied);
// End Module: spnr

// Begin Module: scaler
FLR_RESULT CLIENT_pkgScalerGetMaxZoom(uint32_t *zoom);
FLR_RESULT CLIENT_pkgScalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams);
FLR_RESULT CLIENT_pkgScalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams);
FLR_RESULT CLIENT_pkgScalerSetFractionalZoom(const uint32_t zoomNumerator, const uint32_t zoomDenominator, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable);
FLR_RESULT CLIENT_pkgScalerSetIndexZoom(const uint32_t zoomIndex, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable);
// End Module: scaler

// Begin Module: sysctrl
FLR_RESULT CLIENT_pkgSysctrlSetFreezeState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSysctrlGetFreezeState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSysctrlGetCameraFrameRate(uint32_t *frameRate);
// End Module: sysctrl

// Begin Module: testRamp
FLR_RESULT CLIENT_pkgTestrampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data);
FLR_RESULT CLIENT_pkgTestrampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data);
FLR_RESULT CLIENT_pkgTestrampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data);
FLR_RESULT CLIENT_pkgTestrampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data);
FLR_RESULT CLIENT_pkgTestrampSetMotionState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTestrampGetMotionState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTestrampSetIndex(const uint8_t data);
FLR_RESULT CLIENT_pkgTestrampGetIndex(uint8_t *data);
FLR_RESULT CLIENT_pkgTestrampGetMaxIndex(uint8_t *data);
// End Module: testRamp

// Begin Module: symbology
FLR_RESULT CLIENT_pkgSymbologySetEnable(const FLR_ENABLE_E draw_symbols);
FLR_RESULT CLIENT_pkgSymbologyCreateBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height);
FLR_RESULT CLIENT_pkgSymbologySendData(const uint8_t ID, const int16_t size, const uint8_t text[128]);
FLR_RESULT CLIENT_pkgSymbologyCreateArc(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const float start_angle, const float end_angle, const uint32_t color);
FLR_RESULT CLIENT_pkgSymbologyCreateText(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint8_t text[128]);
FLR_RESULT CLIENT_pkgSymbologyMoveSprite(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y);
FLR_RESULT CLIENT_pkgSymbologyAddToGroup(const uint8_t ID, const uint8_t group_ID);
FLR_RESULT CLIENT_pkgSymbologyRemoveFromGroup(const uint8_t ID, const uint8_t group_ID);
FLR_RESULT CLIENT_pkgSymbologyUpdateAndShow(const uint8_t ID, const uint8_t visible);
FLR_RESULT CLIENT_pkgSymbologyUpdateAndShowGroup(const uint8_t group_ID, const uint8_t visible);
FLR_RESULT CLIENT_pkgSymbologyDelete(const uint8_t ID);
FLR_RESULT CLIENT_pkgSymbologyDeleteGroup(const uint8_t group_ID);
FLR_RESULT CLIENT_pkgSymbologyCreateFilledRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_RESULT CLIENT_pkgSymbologyCreateOutlinedRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPng(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t size);
FLR_RESULT CLIENT_pkgSymbologyCreateCompressedBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height);
FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPngFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[128]);
FLR_RESULT CLIENT_pkgSymbologyResetWritePosition(const uint8_t ID);
FLR_RESULT CLIENT_pkgSymbologyMoveByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y);
FLR_RESULT CLIENT_pkgSymbologyMoveGroupByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y);
FLR_RESULT CLIENT_pkgSymbologyCreateFilledEllipse(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color);
FLR_RESULT CLIENT_pkgSymbologyCreateLine(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color);
FLR_RESULT CLIENT_pkgSymbologySetZorder(const uint8_t ID, const uint8_t zorder);
FLR_RESULT CLIENT_pkgSymbologySaveConfiguration();
FLR_RESULT CLIENT_pkgSymbologyReloadConfiguration();
FLR_RESULT CLIENT_pkgSymbologyGetEnable(FLR_ENABLE_E *draw_symbols);
FLR_RESULT CLIENT_pkgSymbologySetClonesNumber(const uint8_t ID, const uint8_t numberOfClones);
FLR_RESULT CLIENT_pkgSymbologyMoveCloneByOffset(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y);
FLR_RESULT CLIENT_pkgSymbologyMoveCloneSprite(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y);
// End Module: symbology

// Begin Module: fileOps
FLR_RESULT CLIENT_pkgFileopsDir(uint8_t dirent[]);
FLR_RESULT CLIENT_pkgFileopsCd(const uint8_t path[128], uint8_t pwd[]);
FLR_RESULT CLIENT_pkgFileopsMd(const uint8_t path[128]);
FLR_RESULT CLIENT_pkgFileopsFopen(const uint8_t path[128], const uint8_t mode[128], uint32_t *id);
FLR_RESULT CLIENT_pkgFileopsFclose(const uint32_t id);
FLR_RESULT CLIENT_pkgFileopsFread(const uint32_t id, const uint32_t length, uint8_t buf[], uint32_t *ret);
FLR_RESULT CLIENT_pkgFileopsFwrite(const uint32_t id, const uint32_t length, const uint8_t buf[128], uint32_t *ret);
FLR_RESULT CLIENT_pkgFileopsFtell(const uint32_t id, uint32_t *offset);
FLR_RESULT CLIENT_pkgFileopsFseek(const uint32_t id, const uint32_t offset, const uint32_t origin);
FLR_RESULT CLIENT_pkgFileopsFtruncate(const uint32_t id, const uint32_t length);
FLR_RESULT CLIENT_pkgFileopsRmdir(const uint8_t path[128]);
FLR_RESULT CLIENT_pkgFileopsRm(const uint8_t path[128]);
FLR_RESULT CLIENT_pkgFileopsRename(const uint8_t oldpath[128], const uint8_t newpath[128]);
FLR_RESULT CLIENT_pkgFileopsGetFileSize(const uint8_t path[128], uint32_t *fileLength);
// End Module: fileOps

// Begin Module: jffs2
FLR_RESULT CLIENT_pkgJffs2Mount();
FLR_RESULT CLIENT_pkgJffs2Unmount();
FLR_RESULT CLIENT_pkgJffs2GetState(FLR_JFFS2_STATE_E *state);
// End Module: jffs2

// Begin Module: splashScreen
FLR_RESULT CLIENT_pkgSplashscreenSetDuration(const uint32_t screen_num, const uint32_t periodMs);
FLR_RESULT CLIENT_pkgSplashscreenSetDataType(const uint32_t screen_num, const FLR_SPLASHSCREEN_FILETYPE_E filetype);
FLR_RESULT CLIENT_pkgSplashscreenSetBackground(const uint32_t screen_num, const uint32_t backgroundColor);
FLR_RESULT CLIENT_pkgSplashscreenGetDuration(const uint32_t screen_num, uint32_t *periodMs);
FLR_RESULT CLIENT_pkgSplashscreenGetDataType(const uint32_t screen_num, FLR_SPLASHSCREEN_FILETYPE_E *filetype);
FLR_RESULT CLIENT_pkgSplashscreenGetBackground(const uint32_t screen_num, uint32_t *backgroundColor);
// End Module: splashScreen

// Begin Module: systemSymbols
FLR_RESULT CLIENT_pkgSystemsymbolsGetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, uint8_t *id, FLR_SYSTEMSYMBOLS_ID_TYPE_E *id_type);
FLR_RESULT CLIENT_pkgSystemsymbolsSetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const uint8_t id, const FLR_SYSTEMSYMBOLS_ID_TYPE_E id_type);
FLR_RESULT CLIENT_pkgSystemsymbolsGetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, FLR_ENABLE_E *enabled);
FLR_RESULT CLIENT_pkgSystemsymbolsSetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const FLR_ENABLE_E enabled);
// End Module: systemSymbols

// Begin Module: sffc
FLR_RESULT CLIENT_pkgSffcGetScaleFactor(float *data);
FLR_RESULT CLIENT_pkgSffcGetDeltaTempLinearCoeff(float *data);
FLR_RESULT CLIENT_pkgSffcSetDeltaTempLinearCoeff(const float data);
FLR_RESULT CLIENT_pkgSffcGetDeltaTempOffsetCoeff(float *data);
FLR_RESULT CLIENT_pkgSffcSetDeltaTempOffsetCoeff(const float data);
FLR_RESULT CLIENT_pkgSffcGetFpaTempLinearCoeff(float *data);
FLR_RESULT CLIENT_pkgSffcSetFpaTempLinearCoeff(const float data);
FLR_RESULT CLIENT_pkgSffcGetFpaTempOffsetCoeff(float *data);
FLR_RESULT CLIENT_pkgSffcSetFpaTempOffsetCoeff(const float data);
FLR_RESULT CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs(uint32_t *data);
FLR_RESULT CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs(const uint32_t data);
// End Module: sffc

// Begin Module: imageStats
FLR_RESULT CLIENT_pkgImagestatsGetTotalHistPixelsInROI(uint32_t *totalPixelsInROI);
FLR_RESULT CLIENT_pkgImagestatsGetPopBelowLowToHighThresh(uint32_t *popBelowLowToHighThresh);
FLR_RESULT CLIENT_pkgImagestatsGetPopAboveHighToLowThresh(uint32_t *popAboveHighToLowThresh);
FLR_RESULT CLIENT_pkgImagestatsSetROI(const FLR_ROI_T roi);
FLR_RESULT CLIENT_pkgImagestatsGetROI(FLR_ROI_T *roi);
FLR_RESULT CLIENT_pkgImagestatsGetFirstBin(uint16_t *firstBin);
FLR_RESULT CLIENT_pkgImagestatsGetLastBin(uint16_t *lastBin);
FLR_RESULT CLIENT_pkgImagestatsGetMean(uint16_t *mean);
FLR_RESULT CLIENT_pkgImagestatsGetFirstBinInROI(uint16_t *firstBinInROI);
FLR_RESULT CLIENT_pkgImagestatsGetLastBinInROI(uint16_t *lastBinInROI);
FLR_RESULT CLIENT_pkgImagestatsGetMeanInROI(uint16_t *meanInROI);
// End Module: imageStats

// Begin Module: srnr
FLR_RESULT CLIENT_pkgSrnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSrnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSrnrSetThRowSum(const uint16_t data);
FLR_RESULT CLIENT_pkgSrnrGetThRowSum(uint16_t *data);
FLR_RESULT CLIENT_pkgSrnrSetThPixel(const uint16_t data);
FLR_RESULT CLIENT_pkgSrnrGetThPixel(uint16_t *data);
FLR_RESULT CLIENT_pkgSrnrSetMaxCorr(const uint16_t data);
FLR_RESULT CLIENT_pkgSrnrGetMaxCorr(uint16_t *data);
FLR_RESULT CLIENT_pkgSrnrGetThPixelApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgSrnrGetMaxCorrApplied(uint16_t *data);
// End Module: srnr

// Begin Module: dummy
FLR_RESULT CLIENT_pkgDummyBadCommand();
// End Module: dummy

#endif // CLIENT_PACKAGER_H

