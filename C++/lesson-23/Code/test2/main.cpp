#include <stdio.h>

class Test {
    int mi;

    void init(int i) // 内部私有函数，避免临时对象产生
    {
        mi = i;
    }
public:
    Test(int i) {
        init(i);
    }
    Test() {
        init(0);
    }
    void print() {
        printf("mi = %d\n", mi);
    }
};


int main()
{
    Test t;

    t.print();

    return 0;
}
