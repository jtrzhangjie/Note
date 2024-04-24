#include <iostream>
#include <string>
#include "Operator.h"

using namespace std;


int main()
{
    Operator<int> op1;

    cout << op1.add(1, 2) << endl;
    cout << op1.multiply(4, 5) << endl;
    cout << op1.minus(5, 6) << endl;
    cout << op1.divide(10, 5) << endl;

    return 0;
}

