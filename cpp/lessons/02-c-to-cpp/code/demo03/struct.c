#include <stdio.h>

/* C 语言中 struct 定义的是“一组变量的集合”，
 * struct Student 才是类型名，Student 本身不是类型。
 */
struct Student
{
    const char *name;
    int age;
};

/* 实际项目里通常配合 typedef 起别名 */
typedef struct Student Student;

int main(void)
{
    struct Student s1 = {"John", 20}; // 必须写 struct
    Student s2 = {"Alice", 22};       // typedef 之后才可以省略 struct

    printf("C:   %s, %d\n", s1.name, s1.age);
    printf("C:   %s, %d\n", s2.name, s2.age);
    return 0;
}
