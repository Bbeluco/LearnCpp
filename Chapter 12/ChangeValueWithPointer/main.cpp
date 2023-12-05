#include <iostream>

int main() {
    int x{3};
    int* ptr{&x};

    std::cout << x << '\n';
    std::cout << *ptr << '\n';

    *ptr = 5;

    std::cout << x << '\n';
    std::cout << *ptr << '\n';
    return 0;
}
