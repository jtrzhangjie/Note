#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool b = false;
    int a = b;

    // sizeof 的结果类型是 size_t。
    printf("sizeof(b) = %zu\n", sizeof(b));
    printf("b = %d, a = %d\n", b, a);

    b = 3;
    a = b;
    printf("b = %d, a = %d\n", b, a);

    b = -5;
    a = b;
    printf("b = %d, a = %d\n", b, a);

    a = 10;
    b = a;
    printf("b = %d, a = %d\n", b, a);

    a = 0;
    b = a;
    printf("b = %d, a = %d\n", b, a);
    return 0;
}
