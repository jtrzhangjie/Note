#include <stdio.h>


#ifdef __cplusplus
extern "C" {
#endif

#include "add.h"

#ifdef __cplusplus
}
#endif


int main()
{
    int c = add(1, 2);

    printf("c = %d\n", c);

    return 0;
}