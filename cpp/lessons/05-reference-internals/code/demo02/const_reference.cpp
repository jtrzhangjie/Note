#include <cstdio>

int main()
{
    int a = 4;
    const int &view = a;
    std::printf("a = %d, view = %d\n", a, view);

    // view 不能用于写入，但 a 本身仍然可写。
    a = 5;
    std::printf("a = %d, view = %d\n", a, view);

    a = 10;
    std::printf("a = %d, view = %d\n", a, view);

    // 直接绑定的临时对象在 literal 的生命周期内有效。
    const int &literal = 1;
    std::printf("literal = %d\n", literal);
    return 0;
}
