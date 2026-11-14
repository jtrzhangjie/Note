#include <stdio.h>

int main()
{
    register int a = 10;

    // C++ 允许对 register 变量取地址。
    // 一旦取地址，register 的“放入寄存器”语义失效，变量改为普通存储。
    int *p = &a;

    printf("C++: a = %d, *p = %d, &a = %p\n", a, *p, static_cast<void *>(&a));

    // 注意：C++17 起 register 关键字被弃用/保留，GCC 会给出警告：
    //   warning: ISO C++17 does not allow 'register' storage class specifier
    return 0;
}
