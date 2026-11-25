#include <stdio.h>

int main(void)
{
    bool b = 0;
    printf("b = %d\n", b);

    // b 先提升为 int；运算结果赋回 bool 时，非零值变为真。
    b = b + 1;
    printf("b = %d\n", b);

    b = b - 3;
    printf("b = %d\n", b);
    return 0;
}
