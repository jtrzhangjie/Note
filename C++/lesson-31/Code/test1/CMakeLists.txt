cmake_minimum_required(VERSION 3.28)
project(test1)

set(CMAKE_CXX_STANDARD 98)

add_executable(test1 main.cpp
        Complex.cpp
        Complex.h)
