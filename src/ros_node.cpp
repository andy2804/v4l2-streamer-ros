//
// Created by andya on 05.07.18.
//

#include <ros/ros.h>
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include "v4l2_camera.h"
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
    std::string camera_name = "v4l2_camera";

    // Initialize node
    ros::init(argc, argv, "v4l2_camera_node");
    ros::NodeHandle nh("v4l2_camera");
    ros::NodeHandle nh_private("~");

    // ROS param handling
    std::string camera_info, encoding;
    int width, height;
    nh_private.param("camera_info", camera_info, std::string(""));
    nh_private.param("image_encoding", encoding, std::string("rgb8"));
    nh_private.param("width", width, 640);
    nh_private.param("height", height, 480);

    // Readout framerate
    // Set publishing frequency
    if (nh.hasParam("frame_rate")) {
        nh.getParam("frame_rate", frame_rate);
    }

    // Read device path
    std::string device = "/dev/video0";
    if (nh.hasParam("device")) {
        nh.getParam("device", device);
    }

    // Initialize Camera Info Handler
    std::shared_ptr<camera_info_manager::CameraInfoManager> cinfo;
    cinfo.reset(new camera_info_manager::CameraInfoManager(nh, camera_name + "/camera_info", camera_info));

    // Initialize camera
    v4l2Camera camera = v4l2Camera(device, width, height);
    camera.init();
    camera.setFramerate(frame_rate);
    camera.allocateBuffer();
    camera.startStream();

    // Get time difference between REALTIME and MONOTIME
    ros::Duration epoch_duration = get_reset_time();

    // Setup publisher
    ros::Publisher camera_info_pub;
    camera_info_pub = nh.advertise<sensor_msgs::CameraInfo>("/v4l2_camera/camera_info", 1);

    image_transport::ImageTransport it(nh);
    image_transport::Publisher v4l2_camera_raw_pub = it.advertise("/v4l2_camera/image_raw", 1);

    printf("Streaming with frequency of %.1f Hz\n", frame_rate);
    int framecount = 0;

    ros::Rate loop_rate(frame_rate);



    while (ros::ok()) {
        // Capture frame and convert to rgb
        cv::Mat img = camera.captureRawFrame();
        cv::cvtColor(img, img, cv::COLOR_YUV2RGB_YUYV);
        framecount++;

        // Convert to image_msg & publish msg
        sensor_msgs::ImagePtr msg;
        msg = cv_bridge::CvImage(std_msgs::Header(), encoding, img).toImageMsg();

		// Build timestamp
		ros::Time last_ts(0, 0);
		last_ts.sec = camera.last_ts.tv_sec;
		last_ts.nsec = camera.last_ts.tv_usec * 1e3;

        msg->width = camera.width;
        msg->height = camera.height;
        msg->header.stamp = last_ts + epoch_duration;

        v4l2_camera_raw_pub.publish(msg);

        // Publish Camera Info
        if (cinfo->isCalibrated()) {
            sensor_msgs::CameraInfoPtr cinfo_msg(
                    new sensor_msgs::CameraInfo(cinfo->getCameraInfo()));
            cinfo_msg->header.stamp = msg->header.stamp;
            camera_info_pub.publish(cinfo_msg);
        } else {
            if (framecount % 100 == 0)
                ROS_INFO_ONCE("Camera is not calibrated!");
        }

        ros::spinOnce();
        loop_rate.sleep();
    }

    ros::spinOnce();

    v4l2_camera_raw_pub.shutdown();
    camera_info_pub.shutdown();

    camera.stopStream();
    camera.closeConnection();
    return 0;
}
