#include <iostream>

int main() {
    int x{1};

    std::cout << x << '\n';
    std::cout << &x << '\n'; //AddressOfOperator
    std::cout << *(&x) << '\n'; //IndirectionOperator
    return 0;
}
