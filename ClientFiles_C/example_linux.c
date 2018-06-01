// --------------------------------------------------------- //
// FLIR Boson Linux SDK Example
// Date: April 12, 2018
// Written by: Jeff Imamura
// Revision on: May 31, 2018 by William Chen
// 
// For more information, look at the Boson SDK Documentation
// https://www.flir.com/support/products/boson#Resources
// --------------------------------------------------------- //

#include <stdio.h>
#include <stdint.h>
#include "Client_API.h"
#include "EnumTypes.h"
#include "UART_Connector.h"

int main()
{
	uint32_t idx;
	
	// Step 1: Initialize the Camera 
	// Port 24 corresponds to -- /dev/ttyACM0
	// Be sure to add permissions on that port to be bound
	// sudo chmod a+rwx /dev/ttyACM0
	FLR_RESULT result;
	result = Initialize(24, 921600); // /dev/ttyACM0, 921600 baud
	printf("Initialize: ");
	if (result)
	{
		printf("Failed to initialize, exiting.\n");
		Close();
		return 1;
	}
	printf("0x%08X\n", result);
	printf("SUCCESS\n\n");

	// Step 2: Get Camera Serial Number
	printf("CameraSN: ");
	uint32_t camera_sn;
	result = bosonGetCameraSN(&camera_sn);
	if (result)
	{
		printf("Failed CameraSN with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%d \n", camera_sn);
	printf("SUCCESS\n\n");

	// Step 3: Set Camera Output to 8-bit or 16-bit
	FLR_DVO_TYPE_E currDvoSource;
	FLR_DVO_TYPE_E dvo8Bit = FLR_DVO_TYPE_MONO16;
	FLR_DVO_TYPE_E dvo16Bit = FLR_DVO_TYPE_MONO8;
	result = dvoGetType(&currDvoSource);
	printf("Initial DVO Source: ");
	if (result)
	{
		printf("Failed DVO with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("Result: 0x%08X -- Value: 0x%08X \n", result, currDvoSource);
	printf("Change Source: ");
	result = dvoSetType(dvo16Bit);
	// result = dvoSetType(dvo8Bit);
	if (result)
	{
		printf("Failed DVO with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("0x%08X\n", result);
	printf("SUCCESS\n\n");
	
	// Step 4: Get Camera Software Version
	uint32_t major, minor, patch;
	printf("SoftwareRev: ");
	result = bosonGetSoftwareRev(&major, &minor, &patch);
	if (result)
	{
		printf("Failed SoftwareRev with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%u.%u.%u \n", major,minor,patch);
	printf("SUCCESS\n\n");

	// Step 5: Get Sensor Part Number
	FLR_BOSON_SENSOR_PARTNUMBER_T part_num;
	printf("PartNum: ");
	result = bosonGetSensorPN(&part_num);
	if (result)
	{
		printf("Failed SensorPN with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf(" \"%s\"", part_num.value);
	for (idx=0; idx<sizeof(part_num); idx++)
	{
		uint8_t tempchar = part_num.value[idx];
		if ( !(idx%16) )
			printf("\n\t");
		if (tempchar>=32 && tempchar<=125)
		{
			printf(" \"%c\"",tempchar);
		}
		else
		{
			printf("  %02X",tempchar);
		}
	}
	printf("\nSUCCESS\n\n");
	
	// Step 6: Read data from Camera Flash
	uint8_t data[256];
	printf("Capture Data[0:255]: ");
	//       memReadCapture(index, offset, num_bytes, empty_data_buffer);
	result = memReadCapture(0, 0, 256, data);
	if (result)
	{
		printf("Failed memRead with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf(" -- ");
	for (idx=0; idx<256; idx++)
	{
		if ( !(idx%16) )
			printf("\n\t");
		printf("  %02X",data[idx]);
	}
	printf("\nSUCCESS\n\n");

	// Step 7: Get the current frame count
	uint32_t frameNum;
	printf("Current Frame Number: ");
	result = roicGetFrameCount(&frameNum);
	if (result)
	{
		printf("Failed FrameCount with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%u\n", frameNum);
	printf("SUCCESS\n\n");


	// Step 8: Set FFC Mode to Manual and back again
	FLR_BOSON_FFCMODE_E currMode;
	FLR_BOSON_FFCMODE_E manualFfcMode = FLR_BOSON_MANUAL_FFC;
	FLR_BOSON_FFCMODE_E autoFfcMode = FLR_BOSON_AUTO_FFC;
	printf("Current FFCMode: ");
	result = bosonGetFFCMode(&currMode);
	if (result)
	{
		printf("Failed getFFCMode with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%d \n", currMode);
	printf("FFCMode Changed to: ");
	result = bosonSetFFCMode(manualFfcMode);
	// result = bosonSetFFCMode(autoFfcMode);
	if (result)
	{
		printf("Failed setFFCMode with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%d \n", manualFfcMode);
	printf("Read FFCMode Again: ");
	result = bosonGetFFCMode(&currMode);
	if (result)
	{
		printf("Failed getFFCMode with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("%d \n", currMode);
	printf("SUCCESS\n\n");

	// Step 9: Run a Flat Field Correction on the Camera
	// Sidenote: FFC can be manually triggered from any FFCMode
	result = bosonRunFFC();
	printf("RunFFC: ");
	if (result)
	{
		printf("Failed FFC with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("0x%08X \n", result);
	printf("SUCCESS\n\n");
	
	printf("Closing...\n");
	Close();
	return 0;
	
	// Example purposes only
	// It's not a good idea to write/erase calibration maps
	// but this demonstrates read/write/erase of Camera Flash
	/*

	printf("\n");
	uint8_t flashdata[64];
	printf("Flash Data[0:64]: ");
	//       memReadFlash(enum, index, offset, num_bytes, empty_data_buffer);
	result = memReadFlash(FLR_MEM_LENS_DISTORTION, 1, 0, 64, flashdata);
	if (result)
	{
		printf("Failed with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("-- ");
	for (idx=0; idx<64; idx++)
	{
		if ( !(idx%16) )
			printf("\n\t");
		printf("  %02X",flashdata[idx]);
	}
	printf("\n");
	
	uint8_t writedata[64];
	for (idx=0; idx<64; idx++)
	{
		writedata[idx] = idx;
	}
	printf("Write Flash: ");
	result = memWriteFlash(FLR_MEM_LENS_DISTORTION, 1, 0, 64, writedata);
	if (result)
	{
		printf("Failed with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("success.\n");
	
	printf("\n");
	printf("Confirm Flash Data[0:64]: ");
	//       memReadFlash(enum, index, offset, num_bytes, empty_data_buffer);
	result = memReadFlash(FLR_MEM_LENS_DISTORTION, 1, 0, 64, flashdata);
	if (result)
	{
		printf("Failed with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	for (idx=0; idx<64; idx++)
	{
		if ( !(idx%16) )
			printf("\n\t");
		printf("  %02X",flashdata[idx]);
	}
	printf("\n");
	
	printf("\n");
	printf("Erase Flash: ");
	//       memEraseFlash(enum, index);
	result = memEraseFlash(FLR_MEM_LENS_DISTORTION, 1);
	if (result)
	{
		printf("Failed with status 0x%08X, exiting.\n",result);
		Close();
		return 1;
	}
	printf("success.\n");
	*/
}
