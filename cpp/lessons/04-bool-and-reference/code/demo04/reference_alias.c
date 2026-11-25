#include <stdio.h>

int main(void)
{
    int a = 4;
    int *b = &a;

    // C 没有引用类型，用指针和显式解引用写入 a。
    *b = 5;
    printf("a = %d\n", a);
    return 0;
}
