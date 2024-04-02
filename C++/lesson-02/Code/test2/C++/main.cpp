#include <stdio.h>

struct Student {
    const char *name;
    int age;
};

//f(i)
//{
//    printf("i = %d\n", i);
//}

//g()
//{
//    return 5;
//}


int main(int argc, char *argv[]) {
    Student s1 = {"Delphi", 30};
    Student s2 = {"Tang", 30};

    // f(10); // C++编译器所有标识符必须显示指明类型

    // printf("g() = %d\n", g(1,2,3,4,5)); // C++编译器所有标识符必须显示指明类型

    return 0;
}
