#include <iostream>
#include <string>

using namespace std;

class Parent
{
private:
    int mv;
public:
    Parent()
    {
        mv = 100;
    }

    int value()
    {
        return mv;
    }
};

class Child : public Parent
{
public:
    int addValue(int v)
    {
        mv = mv + v;    // ???? 如何访问父类的非公有成员
    }
};

int main()
{
    return 0;
}
