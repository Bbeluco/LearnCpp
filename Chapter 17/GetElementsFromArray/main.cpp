#include <array>
#include <iostream>

int main() {
    constexpr std::array<char, 5> a{'h', 'e', 'l', 'l', 'o'};
    std::cout << "The length is: " << std::size(a) << '\n';
    std::cout << a[1] << a.at(1) << std::get<1>(a) <<'\n';
    return 0;
}