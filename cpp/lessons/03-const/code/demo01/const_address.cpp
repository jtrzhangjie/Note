#include <stdio.h>

int main()
{
    const int a = 10;
    int *p = (int *)&a; // 取地址时编译器会为 a 分配存储空间

    printf("C++: Begin...\n");
    printf("C++: a = %d, *p = %d\n", a, *p);

    *p = 20;

    /* C++ 的 const 是“真正常量”：
     * 编译器把 a 的值放进符号表，使用 a 时直接替换成 10，
     * 即使通过指针改了存储空间，读取 a 仍然是 10。
     * 注意：修改 const 对象属于未定义行为，这里仅用于观察实现差异。
     */
    printf("C++: a = %d, *p = %d\n", a, *p);
    printf("C++: End...\n");
    return 0;
}
