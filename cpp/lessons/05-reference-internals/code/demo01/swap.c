#include <stdio.h>

static void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 1;
    int b = 2;

    // 按值传递的是地址，通过解引用修改调用者的对象。
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
