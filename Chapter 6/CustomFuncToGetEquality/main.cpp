#include <iostream>
#include <cmath>

constexpr bool customFuncCheckEqualityFloatingNumber(double x, double y, double relEpsilonPercentage) {
    const double differenceBetweenNumbers { std::abs(x - y) };
    const double tolerance { std::max(std::abs(x), std::abs(y)) * relEpsilonPercentage};

    return differenceBetweenNumbers <= tolerance;
}

int main()
{
    constexpr double x { 10.0 - 9.99};
    constexpr double y { 100.0 - 99.99};

    double relEpsilonPercentage{0.01};

    if(customFuncCheckEqualityFloatingNumber(x, y, relEpsilonPercentage)){
        std::cout << "EQUAL";
    }
    return 0;
}
