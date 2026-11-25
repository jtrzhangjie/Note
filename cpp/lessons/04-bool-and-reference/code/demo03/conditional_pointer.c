#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    // C 的条件表达式不是左值；先选择地址，再解引用写入。
    *(a < b ? &a : &b) = 3;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
