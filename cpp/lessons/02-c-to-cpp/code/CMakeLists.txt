# 第 2 课：C 到 C++ 的升级
# 每一组都用 C 和 C++ 各写一遍，对比编译结果。

# register
cpp_add_demo(cpp02u_register_c   demo01/register.c)
cpp_add_demo(cpp02u_register_cpp demo01/register.cpp)

# 全局变量重复定义
cpp_add_demo(cpp02u_global_c   demo02/global.c)
cpp_add_demo(cpp02u_global_cpp demo02/global.cpp)

# struct 关键字
cpp_add_demo(cpp02u_struct_c   demo03/struct.c)
cpp_add_demo(cpp02u_struct_cpp demo03/struct.cpp)

# 函数声明与隐式类型
cpp_add_demo(cpp02u_function_c   demo04/function.c)
cpp_add_demo(cpp02u_function_cpp demo04/function.cpp)

# 默认参数（C++ 专有）
cpp_add_demo(cpp02u_default_args_c   demo05/default_args.c)
cpp_add_demo(cpp02u_default_args_cpp demo05/default_args.cpp)

add_test(NAME cpp02u_register_c   COMMAND cpp02u_register_c)
add_test(NAME cpp02u_register_cpp COMMAND cpp02u_register_cpp)
add_test(NAME cpp02u_global_c     COMMAND cpp02u_global_c)
add_test(NAME cpp02u_global_cpp   COMMAND cpp02u_global_cpp)
add_test(NAME cpp02u_struct_c     COMMAND cpp02u_struct_c)
add_test(NAME cpp02u_struct_cpp   COMMAND cpp02u_struct_cpp)
add_test(NAME cpp02u_function_c   COMMAND cpp02u_function_c)
add_test(NAME cpp02u_function_cpp COMMAND cpp02u_function_cpp)
add_test(NAME cpp02u_default_args_c   COMMAND cpp02u_default_args_c)
add_test(NAME cpp02u_default_args_cpp COMMAND cpp02u_default_args_cpp)
