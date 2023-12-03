#include <iostream>
#include <typeinfo>

template<typename T>
T maxNumber(T x, T y) {
    return ((x < y) ? y : x);
}

template<typename T>
void showNumber(T x, T y) {
    std::cout << x << ' ';
    std::cout << y << '\n';
}

template<typename T>
T someFnc(T x, double d) {
    return 5;
}

int main()
{
    std::cout << typeid(maxNumber<int>(1,3)).name() << '\n';
    std::cout << typeid(maxNumber<double>(2.2,2)).name() << '\n';

    showNumber(1,2); //Template argument deduction
    showNumber(1.3,2.2);

    std::cout << typeid(someFnc('a', 2.2)).name() << '\n';
    return 0;
}
