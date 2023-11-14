#include <iostream>

void earlyReturn(int x, int y) {
    if(x < y) {
        std::cout << "Hello";
        return;
    }

    std::cout << "Goodbye";
}

int main()
{
    earlyReturn(1,2);
    return 0;
}
