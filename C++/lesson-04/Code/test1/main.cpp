#include <stdio.h>

int main(int argc, char *argv[])
{
    bool b = false;
    int a = b;

    printf("sizeof(b) = %d\n", sizeof(b)); // 占用1个字节整形
    printf("b = %d, a = %d\n", b, a);

    b = 3;
    a = b;

    printf("b = %d, a = %d\n", b, a);

    b = -5;
    a = b;

    printf("b = %d, a = %d\n", b, a);

    a = 10;
    b = a;

    printf("a = %d, b = %d\n", a, b);

    a = 0;
    b = a;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
