#include <iostream>
#include <string>
#include "IntArray.h"

using namespace std;

int main()
{
    IntArray* a = IntArray::NewInstance(5);

    if( a != NULL )
    {
        IntArray& array = a->self();

        cout << "array.length() = " << array.length() << endl;

        array[0] = 1;

        for(int i=0; i<array.length(); i++)
        {
            cout << array[i] << endl;
        }
    }

    delete a;

    return 0;
}
