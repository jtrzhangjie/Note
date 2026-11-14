#include <iostream>

// C++ 版本：同样的计算，使用 iostream 和更严格的类型检查
static int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10;
    int b = 20;
    int sum = add(a, b);

    std::cout << "C++ : " << a << " + " << b << " = " << sum << '\n';
    return 0;
}
