cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 17)

project(Hello VERSION 1.0)

add_executable(deepak_executable src/main.cpp src/increment_and_sum.cpp src/vect_add_one.cpp)
