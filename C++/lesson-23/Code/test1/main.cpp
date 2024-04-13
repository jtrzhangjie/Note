#include <stdio.h>

class Test {
    int mi;
public:
    Test(int i) {
        mi = i;
    }
    Test() {
        Test(0); // 此处将产生临时对象，但是现代C++编译器会优化，尽量不产生临时变量，需要杜绝这种写法
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
