#include <iostream>

template<typename T, typename U>
struct Pair {
    T first{};
    U second{};
};

/*
    This code is used to tell the compile how to do a
    CTAD (Class template argument deduction)
    with template struct
*/
template<typename T, typename U>
Pair(T, U) -> Pair<T, U>;

int main() {
    Pair p1{1, 2.3};

    std::cout << p1.first << ' ' << p1.second << '\n';
    return 0;
}
