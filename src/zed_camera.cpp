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

#include "zed_camera.h"


using namespace std;


/**
 * =====================================================================
 * Stereolabs ZED interface class to open connection and stream raw data
 * =====================================================================
 * Initialization & allocating memory to open a v4l2 device according to:
 * https://jayrambhia.wordpress.com/2013/07/03/capture-images-using-v4l2-on-linux/
 * https://gist.github.com/jayrambhia/5866483
 * =====================================================================
 */


// TODO functionality to set video format
// TODO functionality to set streaming frequency


ZedCamera::ZedCamera(string device_address, int width_requested, int height_requested) {
    // Initialize Camera
    device = device_address;
    width = width_requested;
    height = height_requested;
    printf("Device set to: %s\n", device.c_str());
}

ZedCamera::ZedCamera() {}

ZedCamera::~ZedCamera() {
    stopStream();
    closeConnection();
}

void ZedCamera::init() {
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
    format.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV;    // 16-bit 4:2:2
    format.fmt.pix.width = ZedCamera::width;
    format.fmt.pix.height = ZedCamera::height;

    // Request desired format
    if (ioctl(fd, VIDIOC_S_FMT, &format) == -1) {
        perror("Requested format");
        exit(1);
    }
}

void ZedCamera::setFramerate(int fps) {
    // Set framerate struct
    struct v4l2_streamparm parm;
    parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    parm.parm.capture.timeperframe.numerator = 1;
    parm.parm.capture.timeperframe.denominator = fps;

    // Request framerate
    if (ioctl(fd, VIDIOC_S_PARM, &parm) == -1) {
        perror("Framerate");
        exit(1);
    }
}

void ZedCamera::allocateBuffer() {

    // Request Buffer
    struct v4l2_requestbuffers bufrequest;
    bufrequest.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    bufrequest.count = 1;
    bufrequest.memory = V4L2_MEMORY_MMAP;

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
    cv::Mat raw_input(format.fmt.pix.height, format.fmt.pix.width, CV_8UC2, buffer_start);
    ZedCamera::raw_input = raw_input;
}

cv::Mat ZedCamera::captureRawFrame() {
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

void ZedCamera::closeConnection() {
    close(fd);
}

void ZedCamera::startStream() {
    // Activate streaming
    if (ioctl(fd, VIDIOC_STREAMON, &buffer.type) < 0) {
        perror("Streaming");
        exit(1);
    }
}

void ZedCamera::stopStream() {
    // Deactivate streaming
    if (ioctl(fd, VIDIOC_STREAMOFF, &buffer.type) < 0) {
        perror("Streaming");
        exit(1);
    };
}