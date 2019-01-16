#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>

#include "../include/zed_camera.h"


// run using video4linux2 library
int main(int argc, char *argv[]) {
    // TODO automatic detection of the boson device
    BosonCamera camera = BosonCamera("/dev/video1");    // adapt this line to your video device
    camera.init();
    camera.allocateBuffer();
    camera.startStream();
    int framecount = 0;
    time_t t_start = clock();

    // TODO remove debug printouts
    while (true) {
//        time_t t_start = clock();
        cv::Mat img = camera.captureRawFrame();
//        float t_elapsed = (float) (clock() - t_start) / CLOCKS_PER_SEC;
//        printf("Capture time: %f\n", t_elapsed);

        // Normalize for visualization
        cv::normalize(img, img, 65536, 0, cv::NORM_MINMAX);
//        cv::imshow("Raw Input", img);
        framecount++;

        if (framecount % 30 == 0) {
            float t_elapsed = (float) (clock() - t_start) / CLOCKS_PER_SEC * 10;
            float fps = framecount / t_elapsed;
            printf("\rFPS: %.1f\tTime elapsed: %i s", fps, (int) t_elapsed);
            fflush(stdout);
        }

        // TODO save images using cv::imwrite

        // Press 'q' to exit
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }
    camera.stopStream();
    camera.closeConnection();
    return 0;
}
