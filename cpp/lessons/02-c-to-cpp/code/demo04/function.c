#include <stdio.h>

/* C 的旧式写法：
 *   - 省略返回类型时默认 int
 *   - 省略参数类型时默认 int
 *   - f() 的参数表为空，表示“参数未指定”，可以传任意个实参
 *
 * 现代编译器会给出 -Wimplicit-int / -Wstrict-prototypes 警告。
 */
f(i)
{
    printf("C: f: i = %d\n", i);
}

g()
{
    return 5;
}

int main(void)
{
    f(10);

    /* C 中 g() 没有原型声明，编译器不检查参数个数，传 5 个实参也能编译。
     * 这是旧式无原型函数的遗留行为；标准上参数个数与定义不一致属于
     * 未定义行为，只是常见 ABI 会忽略多余实参。不要在新代码中这样写。
     */
    printf("C: g(1,2,3,4,5) = %d\n", g(1, 2, 3, 4, 5));
    return 0;
}
