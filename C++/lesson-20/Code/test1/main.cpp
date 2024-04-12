#include <stdio.h>

class Test
{
private:
    const int ci;
public:
    Test() : ci(10)
    {
        // ci = 10; // 只读熟悉的变量无法这样初始化
    }
    int getCI()
    {
        return ci;
    }
};


int main()
{
    Test t;

    printf("t.ci = %d\n", t.getCI());

    return 0;
}
