#include <stdio.h>

void f()
{
#define A 3
    const int b = 4;

    printf("C++: f: A = %d, b = %d\n", A, b);
}

void g()
{
    /* 宏由预处理器做纯文本替换，不理会函数作用域，
     * 所以 f() 里定义的 A 在 g() 里仍然可用。
     */
    printf("C++: g: A = %d\n", A);

    /* ❌ const 变量 b 的作用域只在 f() 内部：
     *    error: 'b' was not declared in this scope
     *
     * printf("C++: g: b = %d\n", b);
     */
}

int main()
{
    f();
    g();
    return 0;
}
