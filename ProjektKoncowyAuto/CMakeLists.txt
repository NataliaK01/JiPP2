cmake_minimum_required(VERSION 3.20)
project(ProjektKoncowyAuto)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)

add_executable(ProjektKoncowyAuto src/auta.cpp include/auta.h src/main.cpp)
