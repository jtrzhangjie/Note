# 第 4 课：布尔类型和引用
# original/ 中的原始片段不参与默认构建。

# 布尔类型参与算术运算
cpp_add_demo(cpp04b_bool_arithmetic_c   demo01/bool_arithmetic.c)
cpp_add_demo(cpp04b_bool_arithmetic_cpp demo01/bool_arithmetic.cpp)

# 布尔类型与整数互转
cpp_add_demo(cpp04b_bool_conversion_c   demo02/bool_conversion.c)
cpp_add_demo(cpp04b_bool_conversion_cpp demo02/bool_conversion.cpp)

# 条件表达式：C 选择地址，C++ 直接选择可修改的左值
cpp_add_demo(cpp04b_conditional_pointer_c  demo03/conditional_pointer.c)
cpp_add_demo(cpp04b_conditional_lvalue_cpp demo03/conditional_lvalue.cpp)

# 引用别名与指针对照（仓库补充示例）
cpp_add_demo(cpp04b_reference_alias_c   demo04/reference_alias.c)
cpp_add_demo(cpp04b_reference_alias_cpp demo04/reference_alias.cpp)

add_test(NAME cpp04b_bool_arithmetic_c      COMMAND cpp04b_bool_arithmetic_c)
add_test(NAME cpp04b_bool_arithmetic_cpp    COMMAND cpp04b_bool_arithmetic_cpp)
add_test(NAME cpp04b_bool_conversion_c      COMMAND cpp04b_bool_conversion_c)
add_test(NAME cpp04b_bool_conversion_cpp    COMMAND cpp04b_bool_conversion_cpp)
add_test(NAME cpp04b_conditional_pointer_c  COMMAND cpp04b_conditional_pointer_c)
add_test(NAME cpp04b_conditional_lvalue_cpp COMMAND cpp04b_conditional_lvalue_cpp)
add_test(NAME cpp04b_reference_alias_c      COMMAND cpp04b_reference_alias_c)
add_test(NAME cpp04b_reference_alias_cpp    COMMAND cpp04b_reference_alias_cpp)
