#include <stdio.h>

struct TRef
{
    char& r;
};

int main(int argc, char *argv[])
{
    char c = 'c';
    char& rc = c;
    TRef ref = { c };

    printf("sizeof(char&) = %d\n", sizeof(char&));
    printf("sizeof(rc) = %d\n", sizeof(rc));

    printf("sizeof(TRef) = %d\n", sizeof(TRef)); // 64位系统下，指针占用8个字节，引用本质就是指针
    printf("sizeof(ref.r) = %d\n", sizeof(ref.r));

    return 0;
}
