#include <stdio.h>

int g_v;

/* ❌ C++ 不允许重复定义同名全局变量：
 *    error: redefinition of 'int g_v'
 *
 * int g_v;
 *
 * 如果只是想在其他文件里使用，应写 extern 声明：
 *    extern int g_v;
 */

int main()
{
    g_v = 42;
    printf("C++: g_v = %d, &g_v = %p\n", g_v, static_cast<void *>(&g_v));
    return 0;
}
