#include <iostream>

constexpr bool isEven(int x) {
    return !(x % 2);
}

int getInputValue() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    const int number{getInputValue()};

    std::cout << number;
    if(isEven(number)) {
        std::cout << " is even.";
    } else {
        std::cout << " is odd.";
    }
    return 0;
}
