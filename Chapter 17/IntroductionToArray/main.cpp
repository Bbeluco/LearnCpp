#include <array>
#include <vector>
#include <iostream>


int main() {
    /*
        The two cases below creates an array with 5 slots to work with
        in std::array, we must declare how many elements we want inside the template arguments
    */

    std::array<int, 5> a1;
    std::vector<int> a2(5);

    a1[0] = 9;
    std::cout << "a1: " << a1[0] << '\n';

    /*
        The lenght of std::array is a constexpr, it could be
         an integer literal, constexpr variable or unscoped enum
    */

    constexpr int size{6};
    std::array<int, size> b1{1,2,3,4,5};
    std::cout << "b1: " << b1[5] << '\n';

    /*
        BEST PRACTICE
        As std::arrays works more performantive way when its constexpr, prefer use it like this 
    */
    constexpr std::array<int, 5> c1{0,1,2,3,4};
    std::array<double, 365> temp{};
    constexpr std::array<char, 5> hello{ 'h', 'e', 'l', 'l', 'o' };
    std::cout << "Char: " << hello[1] << '\n';
    return 0;
}