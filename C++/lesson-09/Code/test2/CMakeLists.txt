cmake_minimum_required(VERSION 3.27)
project(test2)

set(CMAKE_CXX_STANDARD 98)

add_executable(test2 main.cpp
        add.c
        add.h)
