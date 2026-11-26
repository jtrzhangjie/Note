#include <cstdio>

static int local_value()
{
    int value = 0;
    return value;
}

static int &shared_value()
{
    // 静态局部对象在函数返回后仍然有效。
    static int value = 0;
    return value;
}

int main()
{
    int copy = local_value();
    int &shared = shared_value();
    std::printf("initial: copy = %d, shared = %d\n", copy, shared);

    copy = 10;
    shared = 11;
    std::printf("after assignments: copy = %d, shared = %d\n", copy, shared);

    int by_value = local_value();
    int &by_reference = shared_value();
    std::printf("next call: by_value = %d, by_reference = %d\n", by_value, by_reference);
    return 0;
}
