cmake_minimum_required(VERSION 3.20)
project(lab_7)
include_directories(include)
set(CMAKE_CXX_STANDARD 14)

add_executable(lab_7 src/main.cpp include/figure.h src/figure.cpp)