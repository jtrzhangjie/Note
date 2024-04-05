#include <stdio.h>

int func(int a, int b, int c = 0)
{
    return a * b * c;
}

int func(int a, int b)
{
    return a + b;
}


int main(int argc, char *argv[])
{
    int c = func(1, 2); // 编译报错，无法确定使用哪一个函数，参数默认值的函数和下面一个没区别

    return 0;
}

