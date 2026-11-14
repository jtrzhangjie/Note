#include <stdio.h>

/* C 版本：面向过程，数据 + 函数 */
static int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a = 10;
    int b = 20;
    int sum = add(a, b);

    printf("C   : %d + %d = %d\n", a, b, sum);
    return 0;
}
