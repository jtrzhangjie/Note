#include <stdio.h>

int main()
{
    /* C++ 中 const 变量是常量表达式，可以直接作为数组长度。 */
    const int A = 1;
    const int B = 2;
    int array[A + B] = {0};

    printf("C++: array size = %d\n", A + B);
    for (int i = 0; i < A + B; ++i)
    {
        printf("C++: array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
