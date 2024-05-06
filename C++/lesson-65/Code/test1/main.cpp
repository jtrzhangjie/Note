#include <iostream>
#include <string>

using namespace std;

void Demo()
{
    try
    {
        try
        {
            throw 'c';
        }
        catch(int i)
        {
            cout << "Inner: catch(int i)" << endl;
            throw i;
        }
        catch(...)
        {
            cout << "Inner: catch(...)" << endl;
            throw;
        }
    }
    catch(...)
    {
        cout << "Outer: catch(...)" << endl;
    }
}


/*
    ���裺 ��ǰ�ĺ���ʽ���������еĺ�������ˣ������޷��޸�Դ����

    �������� void func(int i)
    �׳��쳣�����ͣ� int
                        -1 ==�� �����쳣
                        -2 ==�� �����쳣
                        -3 ==�� ��ʱ�쳣
*/
void func(int i)
{
    if( i < 0 )
    {
        throw -1;
    }

    if( i > 100 )
    {
        throw -2;
    }

    if( i == 11 )
    {
        throw -3;
    }

    cout << "Run func..." << endl;
}

void MyFunc(int i)
{
    try
    {
        func(i);
    }
    catch(int i)
    {
        switch(i)
        {
            case -1:
                throw "Invalid Parameter";
                break;
            case -2:
                throw "Runtime Exception";
                break;
            case -3:
                throw "Timeout Exception";
                break;
        }
    }
}

int main(int argc, char *argv[])
{
    // Demo();

    try
    {
        MyFunc(11);
    }
    catch(const char* cs)
    {
        cout << "Exception Info: " << cs << endl;
    }

    return 0;
}

