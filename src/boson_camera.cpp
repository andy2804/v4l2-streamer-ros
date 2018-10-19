//
// Created by andya on 02.07.18.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/videodev2.h>
#include <opencv2/opencv.hpp>
#include <asm/types.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "boson_camera.h"


using namespace std;


/**
 * =====================================================================
 * FLIR Boson 640 interface class to open connection and stream raw data
 * =====================================================================
 * Initialization & allocating memory to open a v4l2 device according to:
 * https://jayrambhia.wordpress.com/2013/07/03/capture-images-using-v4l2-on-linux/
 * https://gist.github.com/jayrambhia/5866483
 * =====================================================================
 */


// TODO functionality to set video format
// TODO functionality to set streaming frequency


BosonCamera::BosonCamera(string device_address) {
    // Initialize Camera
    device = device_address;
    width = 640;
    height = 512;
    printf("Device set to: %s\n", device.c_str());
}

BosonCamera::BosonCamera() {}

BosonCamera::~BosonCamera() {
    stopStream();
    closeConnection();
}

void BosonCamera::init() {
    // Open camera connection
    char *dev = &device[0u];
    if ((fd = open(dev, O_RDWR)) == -1) {
        perror("Connection");
        exit(1);
    }

    // Check Device capabilities
    if (ioctl(fd, VIDIOC_QUERYCAP, &cap) == -1) {
        perror("Capabilities Query");
        exit(1);
    }
    if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE)) {
        perror("Single-planar video capture");
        exit(1);
    }

    // Set video format
    format.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
//    format.fmt.pix.pixelformat = V4L2_PIX_FMT_YVU420;    // 8-bit
    format.fmt.pix.pixelformat = V4L2_PIX_FMT_Y16;       // 16-bit
    format.fmt.pix.width = 640;
    format.fmt.pix.height = 512;

    // Request desired format
    if (ioctl(fd, VIDIOC_S_FMT, &format) == -1) {
        perror("Requested format");
        exit(1);
    }
}

void BosonCamera::allocateBuffer() {

    // Request Buffer
    struct v4l2_requestbuffers bufrequest;
    bufrequest.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    bufrequest.memory = V4L2_MEMORY_MMAP;
    bufrequest.count = 1;

    if (ioctl(fd, VIDIOC_REQBUFS, &bufrequest) < 0) {
        perror("Buffer request");
        exit(1);
    }

    // Allocate buffer memory
    struct v4l2_buffer buffertype;
    memset(&buffertype, 0, sizeof(buffertype));
    buffertype.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buffertype.memory = V4L2_MEMORY_MMAP;
    buffertype.index = 0;

    if (ioctl(fd, VIDIOC_QUERYBUF, &buffertype) < 0) {
        perror("Memory allocation");
        exit(1);
    }

    // Initialize buffer
    printf("Image width   = %i\n", format.fmt.pix.width);
    printf("Image height  = %i\n", format.fmt.pix.height);
    printf("Buffer length = %i\n", buffertype.length);

    void *buffer_start = mmap(NULL, buffertype.length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, buffertype.m.offset);

    if (buffer_start == MAP_FAILED) {
        perror("Memory mapping");
        exit(1);
    }
    memset(buffer_start, 0, buffertype.length);
    buffer = buffertype;

    // Declare openCV Buffer address
    cv::Mat raw_input_16(format.fmt.pix.height, format.fmt.pix.width, CV_16U, buffer_start);
    raw_input = raw_input_16;
}

cv::Mat BosonCamera::captureRawFrame() {
    // Put the buffer in the incoming queue.
    if (ioctl(fd, VIDIOC_QBUF, &buffer) < 0) {
        perror("Buffer incoming queue");
        exit(1);
    }
    // The buffer's waiting in the outgoing queue.
    if (ioctl(fd, VIDIOC_DQBUF, &buffer) < 0) {
        perror("Buffer outgoing queue");
        exit(1);
    }

    last_ts = buffer.timestamp;

    return raw_input;
}

void BosonCamera::closeConnection() {
    close(fd);
}

void BosonCamera::startStream() {
    // Activate streaming
    if (ioctl(fd, VIDIOC_STREAMON, &buffer.type) < 0) {
        perror("Streaming");
        exit(1);
    }
}

void BosonCamera::stopStream() {
    // Deactivate streaming
    if (ioctl(fd, VIDIOC_STREAMOFF, &buffer.type) < 0) {
        perror("Streaming");
        exit(1);
    };
}