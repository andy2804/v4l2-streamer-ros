-----------------------------
Stereolabs ZED ROS Wrapper (CPU Only)
-----------------------------
ROS Wrapper camera interface for the Stereolabs ZED being used for the Zauron. This is an initial work-in-progress project.

-----------------------------
Getting started
-----------------------------
1. Compile the code using an IDE like CLion or put it into your ros catkin workspace and make using: `catkin build`
2. Connect the Stereolabs ZED.
3. Find the v4l2 device id by listing it: `v4l2-ctl --all`
4. Put the correct device id into the launch file in zauron_eye
