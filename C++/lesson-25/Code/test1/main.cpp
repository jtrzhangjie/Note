#include <stdio.h>

class Test
{
private:
    int mCount;
public:
    Test() : mCount(0)
    {
        mCount++;
    }
    ~Test()
    {
        --mCount;
    }
    int getCount()
    {
        return mCount;
    }
};

Test gTest;

int main()
{
    Test t1;
    Test t2;

    printf("count = %d\n", gTest.getCount());
    printf("count = %d\n", t1.getCount());
    printf("count = %d\n", t2.getCount());

    return 0;
}
