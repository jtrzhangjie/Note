#include <stdio.h>

struct Student
{
    const char* name;
    int age;
};

f(i)
{
    printf("i = %d\n", i);
}

g()
{
    return 5;
}


int main(int argc, char *argv[])
{
//    Student s1 = {"Delphi", 30};
//    Student s2 = {"Tang", 30}; // Student只是个集合不是类型，需要搭配typedef使用

    f(10);

    printf("g() = %d\n", g(1,2,3,4,5));

    return 0;
}
