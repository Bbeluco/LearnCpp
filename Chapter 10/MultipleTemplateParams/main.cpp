#include <iostream>

template<typename T, typename U>
auto maxNumber(T x, U y) {
    return (x > y) ? x : y;
}

int main()
{
    std::cout << maxNumber(1,2.5) << '\n';
    return 0;
}
