#include <stdio.h>

int func(int x, int = 0); // 用占位参数和默认参数结合，来实现C语言中不写参数表示接受任意参数的函数

int main(int argc, char *argv[])
{
    printf("%d\n", func(1));
    printf("%d\n", func(2, 3));

    return 0;
}

int func(int x, int)
{
    return x;
}

