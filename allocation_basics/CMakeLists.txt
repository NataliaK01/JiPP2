cmake_minimum_required(VERSION 3.20)
project(allocation_basics)

set(CMAKE_CXX_STANDARD 14)

add_executable(allocation_basics main.cpp ../firstLib/src/lib.cpp ../firstLib/include/simpleLib/lib.h ../pole_figury/include/pole.h ../pole_figury/src/pole.cpp ../pole_figury/src/main.cpp ../firstLib/src/main.cpp "../lab_3_zad_2/main.cpp" ../lab_3_zad_3/main.cpp ../lab_3_zad_4/main.cpp ../lab_3_zad_5/main.cpp)

