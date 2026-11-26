#include <cstdio>

struct ReferenceLayout
{
    char *before;
    char &value;
    char *after;
};

int main()
{
    char first = 'a';
    char last = 'c';
    ReferenceLayout layout = {&first, first, &last};

    std::printf("sizeof(ReferenceLayout) = %zu\n", sizeof(ReferenceLayout));
    std::printf("sizeof(layout.before) = %zu\n", sizeof(layout.before));
    std::printf("sizeof(layout.value) = %zu\n", sizeof(layout.value));
    std::printf("sizeof(layout.after) = %zu\n", sizeof(layout.after));

    // 对引用成员取地址得到的是被引用对象的地址。
    std::printf("same referent = %d\n", &layout.value == layout.before);
    return 0;
}
