//
// Created by andya on 02.07.18.
//

#ifndef ZED_CAMERA_H
#define ZED_CAMERA_H

#include <string>
#include <linux/videodev2.h>
#include <opencv2/opencv.hpp>

class ZedCamera {
    int fd;
    std::string device;
    struct v4l2_capability cap;
    struct v4l2_format format;
    struct v4l2_buffer buffer;
    cv::Mat raw_input;

public:
    int width;
    int height;
    timeval last_ts;

    ZedCamera();
    ZedCamera(std::string device_address, int width, int height);
    ~ZedCamera();
    void init();
    void setFramerate(int fps);
    void allocateBuffer();
    void startStream();
    void stopStream();
    void closeConnection();
    cv::Mat captureRawFrame();
};

#endif
