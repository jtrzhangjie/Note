#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    // 两个候选都是可修改的 int 左值，因此结果可直接赋值。
    (a < b ? a : b) = 3;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
