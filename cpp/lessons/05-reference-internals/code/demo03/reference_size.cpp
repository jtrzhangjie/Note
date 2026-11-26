#include <cstdio>

struct ReferenceMember
{
    char &value;
};

int main()
{
    char character = 'c';
    char &alias = character;
    ReferenceMember sample = {alias};

    // 对引用类型或通过引用访问的表达式取 sizeof，得到被引用类型的大小。
    std::printf("sizeof(char&) = %zu\n", sizeof(char &));
    std::printf("sizeof(alias) = %zu\n", sizeof(alias));
    std::printf("sizeof(ReferenceMember) = %zu\n", sizeof(ReferenceMember));
    std::printf("sizeof(sample.value) = %zu\n", sizeof(sample.value));
    return 0;
}
