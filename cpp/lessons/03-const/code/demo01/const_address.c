#include <stdio.h>

int main(void)
{
    const int a = 10;
    int *p = (int *)&a; // C 中 const 变量仍有存储空间，可以强制去 const

    printf("C: Begin...\n");
    printf("C: a = %d, *p = %d\n", a, *p);

    *p = 20;

    /* C 的 const 只是“只读变量”，运行时仍然从内存取值，
     * 所以这里会看到 a 也变成了 20。
     * 注意：修改 const 对象属于未定义行为，这里仅用于观察实现差异。
     */
    printf("C: a = %d, *p = %d\n", a, *p);
    printf("C: End...\n");
    return 0;
}
