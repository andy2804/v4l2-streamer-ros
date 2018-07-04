-----------------------------
FLIR Boson ROS Wrapper
-----------------------------
ROS Wrapper camera interface for the FLIR Boson 640 being used for the Zauron. This is an initial work-in-progress project.

-----------------------------
Getting started
-----------------------------
1. Compile the code using an IDE like CLion
2. Connect the FLIR Boson 640 camera.

   Make sure that your system has read access to the device, which should be listed as `/dev/ttyACM0`
   
   If not you can give access to the device by invoking `sudo chmod a+rwx /dev/ttyACM0` command
3. Run the code

-----------------------------
Boson SDK Documentation
-----------------------------
[Boson SDK Documentation](https://drive.google.com/open?id=1fuXUIu_wzB4zuVmTPbtUhoiKg0WnqEHm)
