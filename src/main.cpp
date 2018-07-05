#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>

extern "C" {
#include "Client_API.h"
#include "EnumTypes.h"
#include "UART_Connector.h"
}

#include "boson_camera.h"


// run using video4linux2 library
int main() {
    BosonCamera camera = BosonCamera("/dev/video1");
    camera.init();
    camera.allocateBuffer();
    camera.startStream();
    int framecount = 0;
    time_t t_start = clock();
    while (true) {
//        time_t t_start = clock();
        cv::Mat img = camera.captureRawFrame();
//        float t_elapsed = (float) (clock() - t_start) / CLOCKS_PER_SEC;
//        printf("Capture time: %f\n", t_elapsed);

        // Normalize for visualization
        cv::normalize(img, img, 65536, 0, cv::NORM_MINMAX);
        cv::imshow("Raw Input", img);
        framecount++;

        if (framecount % 30 == 0) {
            float t_elapsed = (float) (clock() - t_start) / CLOCKS_PER_SEC * 10;
            float fps = framecount / t_elapsed;
            printf("\rFPS: %.1f\tTime elapsed: %i s", fps, (int) t_elapsed);
            fflush(stdout);
        }

        // Press 'q' to exit
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }
    camera.stopStream();
    camera.closeConnection();
    return 0;
}

// don't use this
// using boson sdk serial connection implementation
// not working, since memory can't be properly read out
int serial_connection() {
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


    // Set Camera Output to 16-bit
    FLR_DVO_TYPE_E dvo16Bit = FLR_DVO_TYPE_MONO16;
    result = dvoSetType(dvo16Bit);
    if (result) {
        printf("Change of output data type with status 0x%08X, exiting.\n", result);
        Close();
        return 1;
    }

    printf("Trying to capture frames... Press 'q' to exit!\n");
    // Trigger Capture
    result = captureSingleFrameWithSrc(FLR_CAPTURE_SRC_BLEND);
    uint32_t fc;
    roicGetFrameCount(&fc);
    printf("Frame: %i\n", fc);

    // Read memory
    uint32_t bytes;
    uint16_t rows;
    uint16_t columns;
    uint8_t bufferNum = 0;
    uint32_t offset = 0;
    memGetCaptureSize(&bytes, &rows, &columns);

    const uint16_t size = 1024;                  // Read 256 Bytes per iteration from onboard memory
    const uint16_t iterations = bytes / size;   // Iterations needed to read the whole image
    uint8_t buffer[bytes];                       // To store our data
    uint16_t data_merged[bytes / 2];             // Merged read bytes into 16-bit per pixel byte array
    // for (int i = 0; i < iterations; i++) {
    memReadCapture(0, 0, bytes, &buffer[0]);
    // }

    printf("\n\nRows: %i\n", rows);
    printf("Columns: %i\n", columns);
    printf("Bytes in Memory: %i\n", bytes);
    printf("Bytes read from Memory: %i\n", size);
    printf("8-bit Data:\n");
    for (int i = 0; i < bytes; i++) {
        if (!(i % 16))
            printf("\n\t");
        printf("  %02X", buffer[i]);
    }

    // Convert 2x 8-bit to 16-bit
    printf("\n\n16-bit Data:\n");
    for (int i = 0; i < bytes / 2; i++) {
        data_merged[i] = (buffer[2 * i] << 8) | (buffer[2 * i + 1] & 0xff);
        if (!(i % 16))
            printf("\n\t");
        printf("  %02X", data_merged[i]);
    }

    // Display data
    cv::Mat img = cv::Mat(rows, columns, CV_16UC1, data_merged);
    cv::namedWindow("MemRead");
    cv::imshow("MemRead", img);
    cv::waitKey(0);

    printf("\n\nClosing...\n");
    Close();
}