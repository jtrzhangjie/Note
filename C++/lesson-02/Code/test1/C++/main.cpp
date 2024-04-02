#include <stdio.h>

int g_v;
// int g_v;

int main(int argc, char *argv[])
{
    printf("Begin...\n");

    int c = 0;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            c += i * j;
        }
    }

    printf("c = %d\n", c);

    register int a = 0;

    printf("&a = %p\n", &a); // 遇到取址符时，将register修饰的变量转换成内存中的变量

    printf("End ...\n");

    return 0;
}