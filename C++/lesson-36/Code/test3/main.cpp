#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char* p = "12345";
    string s = "";

    s.reserve(10);

    // 不要使用 C 语言中的方式操作 C++ 中的字符串
    for(int i=0; i<5; i++)
    {
        s[i] = p[i];
    }

    cout << s << endl;

    return 0;
}
