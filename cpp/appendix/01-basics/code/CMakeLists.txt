cpp_add_demo(cpp01_demo01 demo01/main.cpp)
cpp_add_demo(cpp01_demo02 demo02/main.cpp)
cpp_add_demo(cpp01_demo03 demo03/main.c)

add_test(NAME cpp01_demo01 COMMAND cpp01_demo01)
add_test(NAME cpp01_demo02 COMMAND cpp01_demo02)
add_test(NAME cpp01_demo03 COMMAND cpp01_demo03)
