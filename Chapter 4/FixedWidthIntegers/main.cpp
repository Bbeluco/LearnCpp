#include <cstdint>
#include <iostream>

int main()
{
    std::int16_t i{5}; //This int type uses exactly 16 bits in memory
    std::cout << i << '\n';


    std::cout << '\n';

    std::cout << "Least 8 bits: " << sizeof(std::int_least8_t) * 8 << '\n';
    std::cout << "Least 16 bits: " << sizeof(std::int_least16_t) * 8 << '\n';
    std::cout << "Least 32 bits: " << sizeof(std::int_least32_t) * 8 << '\n';
    std::cout << '\n';
    std::cout << "Fast 8 bits: " << sizeof(std::int_fast8_t) * 8 << '\n';
    std::cout << "Fast 16 bits: " << sizeof(std::int_fast16_t) * 8 << '\n';
    std::cout << "Fast 32 bits: " << sizeof(std::int_fast32_t) * 8 << '\n';
    //The code choose the quantity of bits that has more performance -> int_fast#_t
    //int_least#_t -> Min quantity of bits to store a chosen byte
    std::cout << '\n';

    std::uint_fast16_t sometype {0};

    --sometype;

    std::cout << sometype << '\n';
    return 0;
}
