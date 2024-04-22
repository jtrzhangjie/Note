#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    int mi;
};

class Child : public Parent
{
public:
    int mi;
};

int main()
{
    Child c;

    c.mi = 100;    // mi 究竟是子类自定义的，还是从父类继承得到的？

    return 0;
}