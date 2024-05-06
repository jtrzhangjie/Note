#include <iostream>
#include <string>
#include "Array.h"
#include "HeapArray.h"

using namespace std;

void TestArray()
{
    Array<int, 5> a;

    for(int i=0; i<a.length(); i++)
    {
        a[i] = i;
    }

    for(int i=0; i<a.length(); i++)
    {
        cout << a[i] << endl;
    }
}

void TestHeapArray()
{
    HeapArray<double>* pa = HeapArray<double>::NewInstance(5);

    if( pa != NULL )
    {
        HeapArray<double>& array = pa->self();

        for(int i=0; i<array.length(); i++)
        {
            array[i] = i;
        }

        for(int i=0; i<array.length(); i++)
        {
            cout << array[i] << endl;
        }
    }

    delete pa;
}

int main(int argc, char *argv[])
{

    try
    {
        TestArray();

        cout << endl;

        TestHeapArray();
    }
    catch(...)
    {
        cout << "Exception" << endl;
    }

    return 0;
}

