#include <iostream>

const int seven() {
    return 7;
}

void printNumber(constexpr double x) {
    std::cout << x << '\n';
}

int main()
{
    constexpr double gravity{9.8}; //constexpr indicates the compiler that this const is an compile-time const
    constexpr double a{gravity};
    printNumber(a);

    //constexpr int s{seven()}; //This retrieves an error bc only values with constexpr "type" could initiate constexpr consts
    return 0;
}
