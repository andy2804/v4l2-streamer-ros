//
// Created by andya on 05.07.18.
//

#include <ros/ros.h>
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include "boson_camera.h"
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>

int main(int argc, char *argv[]) {
    // TODO rewrite node in clean code format

    ros::init(argc, argv, "boson_camera_node");

    ros::NodeHandle nh;
    ros::NodeHandle nh_private("~");

    BosonCamera camera = BosonCamera("/dev/video0");
    camera.init();
    camera.allocateBuffer();
    camera.startStream();

    // Setup publisher
    image_transport::ImageTransport it(nh);
    image_transport::Publisher boson_raw_pub = it.advertise("/boson/image_raw", 1);

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

        // Convert to image_msg & publish msg
        sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "mono16", img).toImageMsg();
        boson_raw_pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }

    ros::spinOnce();

    boson_raw_pub.shutdown();

    camera.stopStream();
    camera.closeConnection();
    return 0;
}

