#include <iostream>
#include <string>
#include "Singleton.h"

using namespace std;

class SObject
{
    friend class Singleton<SObject>;    // 当前类需要使用单例模式

    SObject(const SObject&);
    SObject& operator= (const SObject&);

    SObject()
    {
    }
public:

    void print()
    {
        cout << "this = " << this << endl;
    }
};

int main()
{
    SObject* s = Singleton<SObject>::GetInstance();
    SObject* s1 = Singleton<SObject>::GetInstance();
    SObject* s2 = Singleton<SObject>::GetInstance();

    s->print();
    s1->print();
    s2->print();

    return 0;
}

