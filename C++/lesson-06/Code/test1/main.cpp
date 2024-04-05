#include <stdio.h>

#define FUNC(a, b) ((a) < (b) ? (a) : (b))

inline int func(int a, int b)
{
    return a < b ? a : b;
}

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 3;
    int c = func(++a, b); // 宏代码块直接展开，a被调用2次，因此最终结果为3

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
