//
// Created by andya on 02.07.18.
//

#ifndef BOSON_CAMERA_BOSON_CAMERA_H
#define BOSON_CAMERA_BOSON_CAMERA_H

class BosonCamera {
    int fd;
    std::string device;
    struct v4l2_capability cap;
    struct v4l2_format format;

public:
    BosonCamera();
    ~BosonCamera();
    void init();
};

#endif //BOSON_CAMERA_BOSON_CAMERA_H
