# 第 3 课：进化后的 const 分析
# 同样的源码分别用 C / C++ 编译，观察运行结果差异。

# const 变量取地址后修改
cpp_add_demo(cpp03c_const_address_c   demo01/const_address.c)
cpp_add_demo(cpp03c_const_address_cpp demo01/const_address.cpp)

# const 与宏的作用域
cpp_add_demo(cpp03c_const_macro_c   demo02/const_macro.c)
cpp_add_demo(cpp03c_const_macro_cpp demo02/const_macro.cpp)

# const 能否作为数组长度
cpp_add_demo(cpp03c_const_array_c   demo03/const_array.c)
cpp_add_demo(cpp03c_const_array_cpp demo03/const_array.cpp)

add_test(NAME cpp03c_const_address_c   COMMAND cpp03c_const_address_c)
add_test(NAME cpp03c_const_address_cpp COMMAND cpp03c_const_address_cpp)
add_test(NAME cpp03c_const_macro_c     COMMAND cpp03c_const_macro_c)
add_test(NAME cpp03c_const_macro_cpp   COMMAND cpp03c_const_macro_cpp)
add_test(NAME cpp03c_const_array_c     COMMAND cpp03c_const_array_c)
add_test(NAME cpp03c_const_array_cpp   COMMAND cpp03c_const_array_cpp)
