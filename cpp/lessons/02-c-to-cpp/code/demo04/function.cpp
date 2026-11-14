#include <stdio.h>

/* C++ 中所有标识符都必须显式声明类型：
 *   - 不能省略返回值类型
 *   - 不能省略参数类型
 *   - int f() 与 int f(void) 等价，都表示“无参函数”
 */
int f(int i)
{
    printf("C++: f: i = %d\n", i);
    return i;
}

int g()
{
    return 5;
}

int main()
{
    f(10);

    /* ❌ C++ 中 g() 是无参函数，不能传实参：
     *    error: too many arguments to function 'int g()'
     *
     * printf("C++: g(1,2,3,4,5) = %d\n", g(1, 2, 3, 4, 5));
     */

    printf("C++: g() = %d\n", g());
    return 0;
}
