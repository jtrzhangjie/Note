#include <stdio.h>

/* C++ 支持默认参数：调用时省略实参就使用默认值。 */
static int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    printf("C++: add(5)    = %d\n", add(5));
    printf("C++: add(5, 3) = %d\n", add(5, 3));
    return 0;
}
