#include <stdio.h>

int main() {
    int *pi = new int(1); // 动态申请一个int类型内存并初始化为1
    // int* pa = new int[1]; // 动态申请一个int类型的数组，数组长度位1

    float *pf = new float(2.0f);
    char *pc = new char('c');

    printf("*pi = %d\n", *pi);
    printf("*pf = %f\n", *pf);
    printf("*pc = %c\n", *pc);

    delete pi;
    delete pf;
    delete pc;

    return 0;
}