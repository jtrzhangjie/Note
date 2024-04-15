#include <iostream>
#include <string>

using namespace std;

int fib()
{
    static int a0 = 0;
    static int a1 = 1;

    int ret = a1;

    a1 = a0 + a1;
    a0 = ret;

    return ret;
}


int main()
{
    for(int i=0; i<10; i++)
    {
        cout << fib() << endl;
    }

    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << fib() << endl;
    }

    return 0;
}
