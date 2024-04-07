#include <stdio.h>

typedef void(PF)(int);

struct Point
{
    int x;
    int y;
};

int main()
{
    int v = 0x12345;
    PF* pf = (PF*)v;
    char c = char(v);
    Point* p = (Point*)v;
    pf(5); // 整数地址非法，强制指针指向会导致程序异常


    printf("p->x = %d\n", p->x);
    printf("p->y = %d\n", p->y);

    return 0;
}
