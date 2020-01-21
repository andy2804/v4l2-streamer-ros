#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>

#include "v4l2_camera.h"


// run using video4linux2 library
int main(int argc, char *argv[]) {
    v4l2Camera camera = v4l2Camera("/dev/video0");    // adapt this line to your video device
    camera.init();
    camera.setFramerate(30);
    camera.allocateBuffer();
    camera.startStream();
    int framecount = 0;
    time_t t_start = clock();

    printf("Press 'q' to exit.\n\n");
    while (true) {
        cv::Mat img = camera.captureRawFrame();

        // Standard format is 2 channel YUVY
        cv::cvtColor(img, img, CV_YUV2BGR_YUYV);

        // Normalize for visualization
        cv::imshow("Preview", img);
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
