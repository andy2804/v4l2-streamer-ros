//
// Created by andya on 05.07.18.
//

#include <ros/ros.h>
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include "boson_camera.h"

int main(int argc, char *argv[]) {
    ros::init(argc, argv, "boson_camera_node");

    ros::NodeHandle nh;
    ros::NodeHandle nh_private("~");

    BosonCamera camera = BosonCamera("/dev/video1");
    camera.init();
    camera.allocateBuffer();
    camera.startStream();

    // Setup publisher
    ros::Publisher boson_raw_pub = nh.advertise("/boson/image_raw", 1);

    // Set publishing frequency to 10 Hz
    ros::Rate loop_rate(10);
    int framecount = 0;
    while (ros::ok())
    {
        cv::Mat img = camera.captureRawFrame();

        // Normalize for visualization
        cv::normalize(img, img, 65536, 0, cv::NORM_MINMAX);
        cv::imshow("Raw Input", img);
        framecount++;

        /**
         * TODO convert captured image into ros image_Raw msg
         */

        boson_raw_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();
        ++count;
    }

    ros::spinOnce();

    boson_raw_pub.shutdown();

    camera.stopStream();
    camera.closeConnection();
    return 0;
}
