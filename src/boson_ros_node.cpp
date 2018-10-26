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
#include <camera_info_manager/camera_info_manager.h>
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
    // Default frame rate of 10 Hz
    float frame_rate = 10.0;
    std::string camera_name = "boson";

    // Initialize node
    ros::init(argc, argv, "boson_camera_node");

    ros::NodeHandle nh("boson");
    ros::NodeHandle nh_private("~");

    // ROS param handling
    std::string camera_info_url_;
    nh_private.param("camera_info_url", camera_info_url_, std::string(""));

    // Initialize Camera Info Handler
    std::shared_ptr<camera_info_manager::CameraInfoManager> cinfo_;
    cinfo_.reset(new camera_info_manager::CameraInfoManager(nh, camera_name, camera_info_url_));

    // Initialize camera
    BosonCamera camera = BosonCamera(argv[1]);
    camera.init();
    camera.allocateBuffer();
    camera.startStream();

    // Get time difference between REALTIME and MONOTIME
    struct timespec epoch_time = get_reset_time();

    // Setup publisher
    ros::Publisher camera_info_pub_;
    camera_info_pub_ = nh.advertise<sensor_msgs::CameraInfo>("/boson/camera_info", 1);

    image_transport::ImageTransport it(nh);
    image_transport::Publisher boson_raw_pub = it.advertise("/boson/image_raw", 1);
//    image_transport::Publisher boson_normalized_pub = it.advertise("/boson/image_normalized", 1);

    // Set publishing frequency
    if (nh.hasParam("frame_rate")) {
        nh.getParam("frame_rate", frame_rate);
    }
    printf("Streaming with frequency of %.1f Hz\n", frame_rate);
    int framecount = 0;

    ros::Rate loop_rate(frame_rate);

    while (ros::ok()) {
        cv::Mat img = camera.captureRawFrame();
//        cv::Mat img_norm;
//        img.copyTo(img_norm);

        // Normalize for visualization
//        cv::normalize(img, img_norm, 65536, 0, cv::NORM_MINMAX);
//        img_norm.convertTo(img_norm, CV_8UC1, 0.00390625, 0);
        framecount++;

        // Convert to image_msg & publish msg
        sensor_msgs::ImagePtr msg;
        msg = cv_bridge::CvImage(std_msgs::Header(), "mono16", img).toImageMsg();
//        msg[1] = cv_bridge::CvImage(std_msgs::Header(), "mono8", img_norm).toImageMsg();

        msg->width = camera.width;
        msg->height = camera.height;
        msg->header.stamp.sec = camera.last_ts.tv_sec + epoch_time.tv_sec;
        msg->header.stamp.nsec = camera.last_ts.tv_usec * 1e3 + epoch_time.tv_nsec;

        boson_raw_pub.publish(msg);
//        boson_normalized_pub.publish(msg[1]);

        // Publish Camera Info
        if (cinfo_->isCalibrated()) {
            sensor_msgs::CameraInfoPtr cinfo_msg(
                    new sensor_msgs::CameraInfo(cinfo_->getCameraInfo()));
            cinfo_msg->header.stamp.sec = camera.last_ts.tv_sec + epoch_time.tv_sec;
            cinfo_msg->header.stamp.nsec = camera.last_ts.tv_usec * 1e3 + epoch_time.tv_nsec;
            camera_info_pub_.publish(cinfo_msg);
        } else {
            if (framecount % 100 == 0)
                ROS_INFO_ONCE("Boson is not calibrated!");
        }

        ros::spinOnce();
        loop_rate.sleep();
    }

    ros::spinOnce();

    boson_raw_pub.shutdown();
//    boson_normalized_pub.shutdown();
    camera_info_pub_.shutdown();

    camera.stopStream();
    camera.closeConnection();
    return 0;
}
