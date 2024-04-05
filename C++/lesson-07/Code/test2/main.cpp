#include <stdio.h>

int add(int x, int y = 0, int z = 0); // 默认参数提供，从右往左(声明时)

int main(int argc, char *argv[])
{
    printf("%d\n", add(1));
    printf("%d\n", add(1, 2)); // 默认参数匹配，从左往右依次(调用时)
    printf("%d\n", add(1, 2, 3));

    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

