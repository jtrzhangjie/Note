#include <stdio.h>

/* C++ 中 struct 定义的是一个全新的类型，
 * Student 可以直接作为类型名使用，不必再写 struct。
 */
struct Student
{
    const char *name;
    int age;
};

int main()
{
    Student s1 = {"John", 20};
    Student s2 = {"Alice", 22};

    printf("C++: %s, %d\n", s1.name, s1.age);
    printf("C++: %s, %d\n", s2.name, s2.age);
    return 0;
}
