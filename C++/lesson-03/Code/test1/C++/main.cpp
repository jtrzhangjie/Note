#include <stdio.h>

int main()
{
    const int c = 0;
    int* p = (int*)&c;

    printf("Begin...\n");

    *p = 5;

    printf("c = %d\n", c);

    printf("End...\n");

    return 0;
}
