#include <stdio.h>

int main()
{
    int* p = new int;

    *p = 5;
    *p = *p + 10;

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    delete p;

    p = new int[10];

    for(int i=0; i<10; i++)
    {
        p[i] = i + 1;

        printf("p[%d] = %d\n", i, p[i]);
    }

    delete[] p;

    return 0;
}