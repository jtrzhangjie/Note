#include <stdio.h>

class Test
{
private:
    int i;
    int j;
public:
    int getI() { return i; }
    int getJ() { return j; }
    void initialize()
    {
        i = 1;
        j = 2;
    }
};

Test gt;

int main()
{
    gt.initialize();

    printf("gt.i = %d\n", gt.getI());
    printf("gt.j = %d\n", gt.getJ());

    Test t1;

    //t1.initialize();

    printf("t1.i = %d\n", t1.getI()); // 先使用后初始化，类成员变量数据不确定
    printf("t1.j = %d\n", t1.getJ()); // 先使用后初始化，类成员变量数据不确定

    t1.initialize();

    Test* pt = new Test;

    pt->initialize();

    printf("pt->i = %d\n", pt->getI());
    printf("pt->j = %d\n", pt->getJ());

    delete pt;

    return 0;
}
