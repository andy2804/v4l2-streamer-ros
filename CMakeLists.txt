cmake_minimum_required(VERSION 2.8.3)

project(v4l2_camera)

find_package(catkin_simple REQUIRED
        roscpp
        std_msgs)

catkin_simple(ALL_DEPS_REQUIRED)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

find_package(OpenCV REQUIRED)
#find_package(ROS REQUIRED)

set(SRC_FOLDER src)
set(SOURCE_FILES ${SRC_FOLDER}/v4l2_camera.h)

cs_add_executable(
        ${PROJECT_NAME}
        ${SRC_FOLDER}/ros_node.cpp
        ${SRC_FOLDER}/v4l2_camera.cpp
)

target_link_libraries(${PROJECT_NAME}
        ${catkin_LIBRARIES}
        ${OpenCV_LIBRARIES}
        )

cs_install()
cs_export()

