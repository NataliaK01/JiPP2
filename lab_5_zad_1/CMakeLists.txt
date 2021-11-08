cmake_minimum_required(VERSION 3.20)
project(lab_5_zad_1)
include_directories(include)
set(CMAKE_CXX_STANDARD 14)

add_executable(lab_5_zad_1 src/main.cpp include/Point.h src/Point.cpp)