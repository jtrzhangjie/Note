#include <stdio.h>

struct Biology {
    bool living;
};

struct Animal : Biology {
    bool movable;
    void findFood() { }
};

struct Plant : Biology {
    bool growable;
};

struct Beast : Animal {
    void sleep() { }
};

struct Human : Animal {
    void sleep() { }
    void work() { }
};


int main()
{
    return 0;
}
