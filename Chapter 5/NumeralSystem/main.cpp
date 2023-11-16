#include <iostream>

int main()
{
    int decimal{ 2'132'673'462 }; //Default
    int octal{ 012 }; //To use octal numbers you should add 0 in front of the literal int value
    int hexadecimal{ 0xFF }; //To use hexadecimal you should add 0x in front of the literal int value
    int binary{ 0b11 }; //To use binary you should add 0b in front of the literal int value

    std::cout << decimal << '\n';
    std::cout << octal << '\n';
    std::cout << hexadecimal << '\n';
    std::cout << binary << '\n';
    return 0;
}
