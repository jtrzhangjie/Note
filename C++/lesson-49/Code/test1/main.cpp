#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "I'm Parent." << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "I'm Child." << endl;
    }
};

void how_to_print(Parent* p)
{
    p->print();     // 展现多态的行为
}

int main()
{
    Parent p;
    Child c;

    how_to_print(&p);    // Expected to print: I'm Parent.
    how_to_print(&c);    // Expected to print: I'm Child.

    return 0;
}