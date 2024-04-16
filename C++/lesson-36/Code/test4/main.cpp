#include <iostream>
#include <string>
#include "IntArray.h"

using namespace std;

int main()
{
    IntArray* a = IntArray::NewInstance(5);
    IntArray* b = IntArray::NewInstance(10);

    if( a && b )
    {
        IntArray& array = a->self();
        IntArray& brray = b->self();

        cout << "array.length() = " << array.length() << endl;
        cout << "brray.length() = " << brray.length() << endl;

        array = brray;

        cout << "array.length() = " << array.length() << endl;
        cout << "brray.length() = " << brray.length() << endl;
    }

    delete a;
    delete b;

    return 0;
}
