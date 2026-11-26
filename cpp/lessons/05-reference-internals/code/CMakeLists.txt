# 第 5 课：引用的本质分析

# C 指针参数与 C++ 左值引用参数
cpp_add_demo(cpp05r_swap_c   demo01/swap.c)
cpp_add_demo(cpp05r_swap_cpp demo01/swap.cpp)

# 只读引用、引用相关的大小及引用成员
cpp_add_demo(cpp05r_const_reference_cpp  demo02/const_reference.cpp)
cpp_add_demo(cpp05r_reference_size_cpp   demo03/reference_size.cpp)
cpp_add_demo(cpp05r_reference_layout_cpp demo04/reference_layout.cpp)

# 按值返回与按引用返回
cpp_add_demo(cpp05r_reference_return_cpp demo05/reference_return.cpp)

add_test(NAME cpp05r_swap_c                COMMAND cpp05r_swap_c)
add_test(NAME cpp05r_swap_cpp              COMMAND cpp05r_swap_cpp)
add_test(NAME cpp05r_const_reference_cpp   COMMAND cpp05r_const_reference_cpp)
add_test(NAME cpp05r_reference_size_cpp    COMMAND cpp05r_reference_size_cpp)
add_test(NAME cpp05r_reference_layout_cpp  COMMAND cpp05r_reference_layout_cpp)
add_test(NAME cpp05r_reference_return_cpp  COMMAND cpp05r_reference_return_cpp)
