cmake_minimum_required(VERSION 3.8)
project(queue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES LinearList.h QueueByInheritance.cpp QueueByInheritance.h QueueAsBaseClass.cpp QueueAsBaseClass.h)
add_executable(queue ${SOURCE_FILES})