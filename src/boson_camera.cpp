//
// Created by andya on 02.07.18.
//

#include <linux/videodev2.h>
#include <opencv2/opencv.hpp>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <string>
#include <iostream>

extern "C" {
#include "Client_API.h"
#include "EnumTypes.h"
#include "UART_Connector.h"
}

#include "boson_camera.h"


using namespace std;

BosonCamera::BosonCamera() {
    // Initialize Camera
    device = "/dev/video1";
}

void BosonCamera::init() {
    char *dev = &device[0u];
    if ((fd = open(dev, O_RDONLY)) == -1) {
        perror("ERROR: Can't open device");
        exit(1);
    }

    // Check Device capabilities
    if (ioctl(fd, VIDIOC_QUERYCAP, &cap) == -1) {
        perror("ERROR: Video Capture is not available");
        exit(1);
    }

    if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE)) {
        perror("ERROR: Single-planar video capture is not available");
        exit(1);
    }

    // Set video format
    format.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    format.fmt.pix.pixelformat = V4L2_PIX_FMT_YVU420;   // 8-bit
//    format.fmt.pix.pixelformat = V4L2_PIX_FMT_Y16;      // 16-bit
    format.fmt.pix.width = 640;
    format.fmt.pix.height = 512;

    // Request desired format
    if (ioctl(fd, VIDIOC_S_FMT, &format) == -1) {
        perror("ERROR: Requested format not available");
        exit(1);
    }


}