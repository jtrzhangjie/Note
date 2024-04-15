cmake_minimum_required(VERSION 3.28)
project(test4)

set(CMAKE_CXX_STANDARD 98)

add_executable(test4 main.cpp
        IntArray.cpp
        IntArray.h)
