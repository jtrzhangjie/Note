#include <stdio.h>

void static_cast_demo()
{
    int i = 0x12345;
    char c = 'c';
    int* pi = &i;
    char* pc = &c;

    c = static_cast<char>(i);
    pc = static_cast<char*>(pi); // error static_cast只能用于常规类型转换，无法用于常规类型指针转换
}

void const_cast_demo()
{
    const int& j = 1;
    int& k = const_cast<int&>(j);

    const int x = 2;
    int& y = const_cast<int&>(x);

    int z = const_cast<int>(x); // const_cast用于去除变量只读属性，无法用于常规类型转换

    k = 5;

    printf("k = %d\n", k);
    printf("j = %d\n", j);

    y = 8;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("&x = %p\n", &x);
    printf("&y = %p\n", &y);
}

void reinterpret_cast_demo()
{
    int i = 0;
    char c = 'c';
    int* pi = &i;
    char* pc = &c;

    pc = reinterpret_cast<char*>(pi);
    pi = reinterpret_cast<int*>(pc);
    pi = reinterpret_cast<int*>(i);
    c = reinterpret_cast<char>(i); // reinterpret用于常规类型指针的转换，不能用于常规类型变量的转换
}

void dynamic_cast_demo()
{
    int i = 0;
    int* pi = &i;
    char* pc = dynamic_cast<char*>(pi); // dynamic_cast用于类指针的转换并且需要虚函数支持
}

int main()
{
    static_cast_demo();
    const_cast_demo();
    reinterpret_cast_demo();
    dynamic_cast_demo();

    return 0;
}
