#include <stdio.h>

/* C 不支持默认参数：只能写两个函数，或者调用时把参数补全。 */
static int add_default(int a)
{
    return a + 10;
}

static int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("C: add_default(5) = %d\n", add_default(5));
    printf("C: add(5, 3)      = %d\n", add(5, 3));
    return 0;
}
