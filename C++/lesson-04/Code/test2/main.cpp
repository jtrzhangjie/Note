#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 4;
    int& b = a;

    b = 5; // b是引用 操作b等同于操作a a和b都是同一片连续内存空间的名字

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b); // a和b都是同一片连续内存空间的名字

    return 0;
}
