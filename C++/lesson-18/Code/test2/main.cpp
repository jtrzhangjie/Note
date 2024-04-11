#include <stdio.h>

class Test
{
private:
    int m_value;
public:
    Test()
    {
        printf("Test()\n");

        m_value = 0;
    }
    Test(int v)
    {
        printf("Test(int v), v = %d\n", v);

        m_value = v;
    }
    int getValue()
    {
        return m_value;
    }
};

int main()
{
    Test ta[3] = {Test(), Test(1), Test(2)}; // 手工调用构造函数

    for(int i=0; i<3; i++)
    {
        printf("ta[%d].getValue() = %d\n", i , ta[i].getValue());
    }

    Test t = Test(100);

    printf("t.getValue() = %d\n", t.getValue());

    return 0;
}
