#include <stdio.h>

int a = 1;

struct SV
{
    int& x;
    int& y;
    int& z;
};

int main()
{
    int b = 2;
    int* pc = new int(3);
    SV sv = {a, b, *pc};
    // int& array[] = {a, b, *pc}; // &array[1] - &array[0] = ?  Expected ==> 4

    printf("&sv.x = %p\n", &sv.x);
    printf("&sv.y = %p\n", &sv.y);
    printf("&sv.z = %p\n", &sv.z);

    delete pc;

    return 0;
}
