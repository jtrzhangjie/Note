#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>

class Test
{
public:
    Test(const char* s)
    {
        printf("%s\n", s);
    }
};

#endif