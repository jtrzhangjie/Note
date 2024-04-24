#include <iostream>
#include <string>

using namespace std;

class Test
{
    Test(const Test&);
public:
    Test()
    {
    }
};

template < typename T >
void Swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

typedef void(FuncI)(int&, int&);
typedef void(FuncD)(double&, double&);
typedef void(FuncT)(Test&, Test&);

int main()
{
    FuncI* pi = Swap;    // 编译器自动推导 T 为 int
    FuncD* pd = Swap;    // 编译器自动推导 T 为 double
    // FuncT* pt = Swap;    // 编译器自动推导 T 为 Test

    cout << "pi = " << reinterpret_cast<void*>(pi) << endl;
    cout << "pd = " << reinterpret_cast<void*>(pd) << endl;
    // cout << "pt = " << reinterpret_cast<void*>(pt) << endl;

    return 0;
}

