#include <iostream>

void incrementAndPrint() {
    static int value{1};
    ++value;
    std::cout << value << '\n';
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}
