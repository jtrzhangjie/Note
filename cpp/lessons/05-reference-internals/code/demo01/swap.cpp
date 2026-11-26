#include <cstdio>

static void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1;
    int b = 2;

    // 引用形参是调用者对象的别名。
    swap(a, b);
    std::printf("a = %d, b = %d\n", a, b);
    return 0;
}
