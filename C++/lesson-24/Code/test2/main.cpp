#include <stdio.h>

class Test
{
    int mi;
public:
    Test(int i);
    Test(const Test& t);
    int getMi();
};

Test::Test(int i)
{
    mi = i;
}

Test::Test(const Test& t)
{

}

int Test::getMi()
{
    return mi;
}

int main()
{
    Test t(1);

    return 0;
}
