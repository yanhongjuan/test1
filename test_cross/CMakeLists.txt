cmake_minimum_required(VERSION 3.13)
project(test_kalam)

set(CMAKE_CXX_STANDARD 11)
include_directories("/usr/include/eigen3")
add_executable(test_kalam main.cpp)