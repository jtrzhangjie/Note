#include <stdio.h>

int main(void)
{
    int a = 4;
    int &b = a;

    // b 是 a 的别名，给 b 赋值会修改 a。
    b = 5;
    printf("a = %d\n", a);
    return 0;
}
