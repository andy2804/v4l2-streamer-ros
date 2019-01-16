//
// Created by andya on 05.07.18.
//

#include <ros/ros.h>
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include "zed_camera.h"
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
#include <camera_info_manager/camera_info_manager.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <time.h>

ros::Duration get_reset_time() {
    /* get monotonic clock time */
    struct timespec monotime;
    clock_gettime(CLOCK_MONOTONIC, &monotime);

    /* get realtime clock time for comparison */
//    struct timespec realtime;
//    clock_gettime(CLOCK_REALTIME, &realtime);

    ros::Time now = ros::Time::now();
	ros::Duration epoch_duration(0, 0);

//    struct timespec epoch_duration;
    epoch_duration.sec = now.sec - monotime.tv_sec;
	long nsec = now.nsec - monotime.tv_nsec;
	if (nsec < 0) {
		epoch_duration.sec--;
		epoch_duration.nsec = 1e9 + nsec;
	} else {
		epoch_duration.nsec = nsec;
	}
	std::cout << "Epoch Time: " << epoch_duration.sec << "." << epoch_duration.nsec << std::endl;
    return epoch_duration;
}

int main(int argc, char *argv[]) {
    // TODO rewrite node in clean code format
    // Default frame rate of 10 Hz
    float frame_rate = 10.0;
    std::string camera_name = "zed";

    // Initialize node
    ros::init(argc, argv, "zed_camera_node");
    ros::NodeHandle nh("zed");
    ros::NodeHandle nh_l("zed/left");
    ros::NodeHandle nh_r("zed/right");
    ros::NodeHandle nh_private("~");

    // ROS param handling
    std::string camera_info_left, camera_info_right, encoding;
    int width, height;
    nh_private.param("camera_info_left", camera_info_left, std::string(""));
    nh_private.param("camera_info_right", camera_info_right, std::string(""));
    nh_private.param("image_encoding", encoding, std::string("rgb8"));
    nh_private.param("width", width, 2560);
    nh_private.param("height", height, 720);

    // Readout framerate
    // Set publishing frequency
    if (nh.hasParam("frame_rate")) {
        nh.getParam("frame_rate", frame_rate);
    }

    // Initialize Camera Info Handler
    std::shared_ptr<camera_info_manager::CameraInfoManager> cinfo_left;
    std::shared_ptr<camera_info_manager::CameraInfoManager> cinfo_right;
    cinfo_left.reset(new camera_info_manager::CameraInfoManager(nh_l, camera_name + "/left", camera_info_left));
    cinfo_right.reset(new camera_info_manager::CameraInfoManager(nh_r, camera_name + "/right", camera_info_right));

    // Initialize camera
    ZedCamera camera = ZedCamera(argv[1], width, height);
    camera.init();
    camera.setFramerate(frame_rate * 2);
    camera.allocateBuffer();
    camera.startStream();

    // Get time difference between REALTIME and MONOTIME
    ros::Duration epoch_duration = get_reset_time();

    // Setup publisher
    ros::Publisher camera_info_pub_left;
    ros::Publisher camera_info_pub_right;
    camera_info_pub_left = nh_l.advertise<sensor_msgs::CameraInfo>("/zed/left/camera_info", 1);
    camera_info_pub_right = nh_r.advertise<sensor_msgs::CameraInfo>("/zed/right/camera_info", 1);

    image_transport::ImageTransport it(nh);
    image_transport::Publisher zed_raw_pub_left = it.advertise("/zed/left/image_raw", 1);
    image_transport::Publisher zed_raw_pub_right = it.advertise("/zed/right/image_raw", 1);

    printf("Streaming with frequency of %.1f Hz\n", frame_rate);
    int framecount = 0;

    ros::Rate loop_rate(frame_rate);

    while (ros::ok()) {
        // Capture frame and convert to rgb
        cv::Mat img = camera.captureRawFrame();
        cv::cvtColor(img, img, cv::COLOR_YUV2RGB_YUYV);
        framecount++;

        // Split to left & right image
        cv::Mat left = img(cv::Rect(0, 0, img.cols/2, img.rows));
        cv::Mat right = img(cv::Rect(img.cols/2, 0, img.cols/2, img.rows));

        // Convert to image_msg & publish msg
        sensor_msgs::ImagePtr msg[2];
        msg[0] = cv_bridge::CvImage(std_msgs::Header(), encoding, left).toImageMsg();
        msg[1] = cv_bridge::CvImage(std_msgs::Header(), encoding, right).toImageMsg();

		// Build timestamp
		ros::Time last_ts(0, 0);
		last_ts.sec = camera.last_ts.tv_sec;
		last_ts.nsec = camera.last_ts.tv_usec * 1e3;

		for (int i = 0; i < 2; i++) {
            msg[i]->width = camera.width/2;
            msg[i]->height = camera.height;
            msg[i]->header.stamp = last_ts + epoch_duration;
		}

        zed_raw_pub_left.publish(msg[0]);
        zed_raw_pub_right.publish(msg[1]);

        // Publish Camera Info
        if (cinfo_left->isCalibrated()) {
            sensor_msgs::CameraInfoPtr cinfo_msg(
                    new sensor_msgs::CameraInfo(cinfo_left->getCameraInfo()));
            cinfo_msg->header.stamp = msg[0]->header.stamp;
            camera_info_pub_left.publish(cinfo_msg);
        } else {
            if (framecount % 100 == 0)
                ROS_INFO_ONCE("ZED left camera is not calibrated!");
        }
        if (cinfo_right->isCalibrated()) {
            sensor_msgs::CameraInfoPtr cinfo_msg(
                    new sensor_msgs::CameraInfo(cinfo_right->getCameraInfo()));
            cinfo_msg->header.stamp = msg[1]->header.stamp;
            camera_info_pub_right.publish(cinfo_msg);
        } else {
            if (framecount % 100 == 0)
                ROS_INFO_ONCE("ZED right camera is not calibrated!");
        }

        ros::spinOnce();
        loop_rate.sleep();
    }

    ros::spinOnce();

    zed_raw_pub_left.shutdown();
//    boson_normalized_pub.shutdown();
    camera_info_pub_left.shutdown();

    camera.stopStream();
    camera.closeConnection();
    return 0;
}
