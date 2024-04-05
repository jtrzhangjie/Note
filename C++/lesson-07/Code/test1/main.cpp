#include <stdio.h>

int mul(int x = 0);

int main(int argc, char *argv[])
{
    printf("%d\n", mul()); // 调用时没有提供参数，则使用默认参数
    printf("%d\n", mul(-1));
    printf("%d\n", mul(2));

    return 0;
}

int mul(int x)
{
    return x * x;
}

