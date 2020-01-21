-----------------------------
Video 4 Linux 2 devices ROS Wrapper
-----------------------------
This is a wrapper for any universal video class cameras (v4l2) 
that can be mounted through unix device path /dev/videoX. It provides a class to open camera connection
and grad image frames from that camera.
Additionally a ROS wrapper is provided to publish these grabbed frames to a topic.

There is also a standalone program if you only wish to use the v4l2Camera class. 

-----------------------------
Getting started - ROS
-----------------------------
Make sure you have no unmet dependencies (ROS and OpenCV are needed).

1. git clone this repository into the src folder of your catkin workspace
2. Compile the code using: `catkin build`
3. Source your workspace (navigate to the root of your workspace) and run `source devel/setup.bash`
4. Find the v4l2 device id by listing it: `v4l2-ctl --all`
5. Put the correct device id into the launch file `v4l2_camera.launch` in the launch folder
6. Navigate to the launch folder of this repo and type `roslaunch v4l2_camera.launch`

-----------------------------
Getting started - CPP
-----------------------------
Make sure you have no unmet dependencies (OpenCV is needed).

1. Instead of the default (ROS) `CMakeLists.txt` use the `CMakeLists_standalone.txt` (rename them)
2. Take a look at the `main.cpp` example file.
3. Compile the project using an IDE like CLion and run the program.