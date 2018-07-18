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
#include <time.h>

timespec get_reset_time() {
    /* get monotonic clock time */
    struct timespec monotime;
    clock_gettime(CLOCK_MONOTONIC, &monotime);

    /* get realtime clock time for comparison */
//    struct timespec realtime;
//    clock_gettime(CLOCK_REALTIME, &realtime);

    ros::Time now = ros::Time::now();

    struct timespec epoch_time;
    epoch_time.tv_sec = now.sec - monotime.tv_sec;
    epoch_time.tv_nsec = now.nsec - monotime.tv_nsec;

    return epoch_time;
}

int main(int argc, char *argv[]) {
    // TODO rewrite node in clean code format

    ros::init(argc, argv, "boson_camera_node");

    ros::NodeHandle nh;
    ros::NodeHandle nh_private("~");

    printf("Video device set to: %s\n", argv[1]);

    BosonCamera camera = BosonCamera(argv[1]);
    camera.init();
    camera.allocateBuffer();
    camera.startStream();

    // Get time difference between REALTIME and MONOTIME
    struct timespec epoch_time = get_reset_time();

    // Setup publisher
    image_transport::ImageTransport it(nh);
    image_transport::Publisher boson_raw_pub = it.advertise("/boson/image_raw", 1);

    // Set publishing frequency to 10 Hz
    ros::Rate loop_rate(10);
    int framecount = 0;
    while (ros::ok()) {
        cv::Mat img = camera.captureRawFrame();

        // Normalize for visualization
        cv::normalize(img, img, 65536, 0, cv::NORM_MINMAX);
        framecount++;

        // Convert to image_msg & publish msg
        sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "mono16", img).toImageMsg();
        msg->width = camera.width;
        msg->height = camera.height;
        msg->header.stamp.sec = camera.last_ts.tv_sec + epoch_time.tv_sec;
        msg->header.stamp.nsec = camera.last_ts.tv_usec * 1e3 + epoch_time.tv_nsec;
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
