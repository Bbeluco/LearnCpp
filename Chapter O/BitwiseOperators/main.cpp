#include <iostream>
#include <bitset>


int main()
{
    std::bitset<8> bitss{ 0b0000'0110 };

    bitss << 1; //This does not generate side effect
    std::cout << bitss << '\n';

    std::cout << (bitss << 1) << '\n';
    std::cout << (bitss >> 1) << '\n';

    int a{10};
    a = a << 1;
    std::cout << a << '\n';

    std::bitset<4> notOp { 0b0010 };
    std::cout << ~notOp << '\n';

    std::cout << (std::bitset<4> { 0b0101 } | std::bitset<4> { 0b0101 }) << '\n';
    std::cout << (std::bitset<8> { 0b0101 } & std::bitset<8> { 0b0101 }) << '\n';
    std::cout << (std::bitset<4> { 0b0101 } ^ std::bitset<4> { 0b0101 }) << '\n';
    return 0;
}
