# 第 1 课：学习 C++ 的意义
# 同一件事分别用 C 和 C++ 实现，观察两种语言的表达方式。

cpp_add_demo(cpp01m_hello_c   demo01/hello.c)
cpp_add_demo(cpp01m_hello_cpp demo01/hello.cpp)

add_test(NAME cpp01m_hello_c   COMMAND cpp01m_hello_c)
add_test(NAME cpp01m_hello_cpp COMMAND cpp01m_hello_cpp)
