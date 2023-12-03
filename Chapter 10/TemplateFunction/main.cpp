#include <iostream>
#include <typeinfo>

template<typename T>
T maxNumber(T x, T y) {
    return ((x < y) ? y : x);
}

int main()
{
    std::cout << typeid(maxNumber(1,3)).name() << '\n';
    std::cout << typeid(maxNumber(2.2,2.2)).name() << '\n';
    return 0;
}
