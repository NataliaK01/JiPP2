cmake_minimum_required(VERSION 3.20)
project(pole_figury)

set(CMAKE_CXX_STANDARD 14)

add_executable(pole_figury src/main.cpp src/pole.cpp include/pole.h)
