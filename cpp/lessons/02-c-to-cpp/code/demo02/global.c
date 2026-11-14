#include <stdio.h>

/* C 的“试探性定义”（tentative definition）：
 * 同一个翻译单元里可以出现多个同名的全局声明，链接时合并成同一个对象。
 */
int g_v;
int g_v;

int main(void)
{
    g_v = 42;
    printf("C: g_v = %d, &g_v = %p\n", g_v, (void *)&g_v);
    return 0;
}
