#include <iostream>
#include <cstdint>

int main()
{
    constexpr std::uint8_t mask1{ 0b0000'0010 };

    std::uint8_t flags{ 0b0000'0101 };

    flags |= mask1;
    std::cout << flags  << '\n';

    return 0;
}
