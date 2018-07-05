cmake_minimum_required(VERSION 3.10)

project(boson_camera)

link_directories(${MY_SOURCE_DIR}/lib)
include_directories(src)
include_directories(include)
find_package(OpenCV REQUIRED)
find_package(ROS REQUIRED)

set(CMAKE_CXX_STANDARD 11)

set(SRC_FOLDER src)
set(INC_FOLDER include)

set(SOURCE_FILES
        ${SRC_FOLDER}/main.cpp
        ${SRC_FOLDER}/boson_camera.cpp
        ${INC_FOLDER}/Client_API.c
        ${INC_FOLDER}/Client_Dispatcher.c
        ${INC_FOLDER}/Client_Packager.c
        ${INC_FOLDER}/Serializer_BuiltIn.c
        ${INC_FOLDER}/Serializer_Struct.c
        ${INC_FOLDER}/UART_Connector.c src/boson_ros_node.cpp)

add_executable(boson_camera ${SOURCE_FILES})

target_include_directories(boson_camera PUBLIC /EmulatorFiles)
target_link_libraries(boson_camera UART_HalfDuplex64)
target_link_libraries(boson_camera ${OpenCV_LIBS})
