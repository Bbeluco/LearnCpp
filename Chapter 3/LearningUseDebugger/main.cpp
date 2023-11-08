#include <iostream>

void printValue(int value) {
    std::cout << value << '\n';
}

int main() {
    int x{};

    printValue(5);
    printValue(6);
    printValue(7);
    return 0;
}
