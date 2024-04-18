cmake_minimum_required(VERSION 3.28)
project(test3)

set(CMAKE_CXX_STANDARD 98)

add_executable(test3 main.cpp
        Complex.cpp
        Complex.h)
