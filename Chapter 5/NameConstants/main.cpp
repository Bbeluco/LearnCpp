#include <iostream>

#define MY_NAME "Bruno"

void printInt(const int x) {
    std::cout << x << '\n';
}

int main()
{
    const double kEarthGravity {9.8}; //It is the C++ pattern to declare consts with 'k' prefix
    std::cout << kEarthGravity << '\n';

    printInt(1);

    std::cout << MY_NAME << '\n';
    return 0;
}
