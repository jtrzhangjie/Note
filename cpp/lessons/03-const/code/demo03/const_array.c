#include <stdio.h>

int main(void)
{
    /* ❌ C 中 const 变量不是“常量表达式”，不能用来定义数组长度：
     *    const int A = 1;
     *    const int B = 2;
     *    int array[A + B] = {0};
     *    error: variable-sized object may not be initialized
     *
     * C 的替代方案：使用 enum 常量或宏。
     */
    enum
    {
        A = 1,
        B = 2
    };
    int array[A + B] = {0};

    printf("C:   array size = %d\n", A + B);
    for (int i = 0; i < A + B; ++i)
    {
        printf("C:   array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
