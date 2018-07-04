#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>

extern "C" {
#include "Client_API.h"
#include "EnumTypes.h"
#include "UART_Connector.h"
}


int main() {
    // Step 1: Initialize the Camera
    // Port 24 corresponds to -- /dev/ttyACM0

    FLR_RESULT result;
    result = Initialize(24, 921600); // /dev/ttyACM0, 921600 baud
    printf("Initialize: ");
    if (result) {
        printf("Failed to initialize, exiting.\n");
        Close();
        return 1;
    }
    printf("0x%08X\n", result);
    printf("SUCCESS\n\n");

    // Run FFC
    result = bosonRunFFC();
    printf("RunFFC: ");
    if (result) {
        printf("Failed FFC with status 0x%08X, exiting.\n", result);
        Close();
        return 1;
    }
    printf("0x%08X \n", result);
    printf("SUCCESS\n\n");


    // Set Camera Output to 8-bit
    FLR_DVO_TYPE_E dvo8Bit = FLR_DVO_TYPE_MONO8;
    result = dvoSetType(dvo8Bit);
    if (result) {
        printf("Change of output data type with status 0x%08X, exiting.\n", result);
        Close();
        return 1;
    }

    while (true) {
        // Trigger Capture
        printf("Trying to capture a single frame...\n");
        result = captureSingleFrameWithSrc(FLR_CAPTURE_SRC_END);

        // Read memory
        uint32_t bytes;
        uint16_t rows;
        uint16_t columns;
        uint8_t bufferNum = 0;
        uint32_t offset = 0;
        memGetCaptureSize(&bytes, &rows, &columns);
        printf("SUCCESS\n\n");

//        uint32_t size = (bytes <= (rows * columns)) ? bytes : (rows * columns);
        uint32_t size = bytes;
        uint8_t data[size];
        memReadCapture(bufferNum, offset, size, &data[0]);
        printf("Rows: %i\n", rows);
        printf("Columns: %i\n", columns);
        printf("Bytes in Memory: %i\n", bytes);
        printf("Bytes read from Memory: %i\n", size);
        printf("Data:\n");
        for (int idx = 0; idx < size; idx++) {
            if (!(idx % 16))
                printf("\n\t");
            printf("  %02X", data[idx]);
        }

        // Display data
        cv::Mat img = cv::Mat(rows, columns, CV_8UC1, data);
        cv::namedWindow("MemRead");
        cv::imshow("MemRead", img);

        printf("\nPress any key to read next %i bytes, press q to exit\n", size);

        if (cv::waitKey(0) == 'q') {
            break;
        }
    }

    printf("\n\nClosing...\n");
    Close();
    return 0;
}
