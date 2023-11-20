#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> booleans{};


    //The argument that is passed is the bit position, remembering it is R->L
    booleans.set(0); //Set a bit into 1
    booleans.reset(0); //Set a bit into 0
    booleans.flip(7);


    std::cout << booleans << '\n';
    std::cout << booleans.test(7) << '\n';
    std::cout << "The size in BITS is: " << sizeof(std::bitset<8>) * 8<< '\n';
    std::cout << sizeof(bool) << '\n';
    return 0;
}
