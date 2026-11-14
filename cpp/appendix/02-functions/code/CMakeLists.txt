cpp_add_demo(cpp02_demo01
  demo01/main.cpp
  demo01/add.cpp
  demo01/add.h
)

cpp_add_demo(cpp02_demo02 demo02/main.cpp)

add_test(NAME cpp02_demo01 COMMAND cpp02_demo01)
add_test(NAME cpp02_demo02 COMMAND cpp02_demo02)
