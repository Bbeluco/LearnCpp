#include <iostream>

namespace constants {
    inline constexpr double pi { 3.14159 };
}

using Degress = double;
using Radians = double;

Radians convertToRadians(Degress degrees) {
    return degrees * constants::pi / 180;
}

int main() {
    std::cout << "Enter a number of degrees: ";
    Degress degrees{};
    std::cin >> degrees;

    Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
