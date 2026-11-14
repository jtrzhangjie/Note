cmake_minimum_required(VERSION 3.22)
project(cpp_course LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(AddDemo)
include(CTest)

# 主线课程：狄泰《C++ 深度解析》第 1～3 课
add_subdirectory(lessons/01-cpp-meaning/code)
add_subdirectory(lessons/02-c-to-cpp/code)
add_subdirectory(lessons/03-const/code)

# 早期整理的工程基础笔记，保留但不计入课程编号
add_subdirectory(appendix/01-basics/code)
add_subdirectory(appendix/02-functions/code)
