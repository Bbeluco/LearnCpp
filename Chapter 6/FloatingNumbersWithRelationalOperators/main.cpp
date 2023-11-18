#include <iostream>

int main()
{
    constexpr double x{ 10.0 - 9.99};
    constexpr double y{ 100 - 99.99 };

    if(x == y) {
        std::cout << "EQUAL" << '\n';
    } else if(x > y) {
        std::cout << "x > y" << '\n';
    } else {
        std::cout << "y > x" << '\n';
    }

    return 0;
}
