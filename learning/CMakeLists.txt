cmake_minimum_required(VERSION 3.12)
project(CLion_try)

find_package(OpenCV REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)

add_executable(cv2 ${SOURCE_FILES})

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(cv2 ${OpenCV_LIBS})