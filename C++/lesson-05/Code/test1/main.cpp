#include <stdio.h>

void Example()
{
    printf("Example:\n");

    int a = 4;
    const int& b = a;
    int* p = (int*)&b;

    //b = 5; // b是a变量的引用，但是b用const修饰，因此具有只读属性，只能通过b的地址去修改内容

    *p = 5;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void Demo()
{
    printf("Demo:\n");

    const int& c = 1;
    int* p = (int*)&c;

    //c = 5; // c是const引用，并且是字面量的引用，因此无法直接修改，只能通过指针修改

    *p = 5;

    printf("c = %d\n", c);
}

int main(int argc, char *argv[])
{
    Example();

    printf("\n");

    Demo();

    return 0;
}
