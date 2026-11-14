#include <stdio.h>

int main(void)
{
    register int a = 0;
    a = 10;

    printf("C: a = %d\n", a);

    /* ❌ 在 C 中，register 变量不能取地址，编译直接报错：
     *    error: address of register variable 'a' requested
     *
     * printf("C: &a = %p\n", (void *)&a);
     */

    return 0;
}
