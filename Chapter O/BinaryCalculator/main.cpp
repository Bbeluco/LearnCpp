#include <iostream>
#include <string>

int printBinaryOne(int num, int bin_limit) {
    std::cout << "1";
    return (num - bin_limit);
}

int printBinary(int num, int bin_limit) {
    if(num >= bin_limit){
        return printBinaryOne(num, bin_limit);
    }

    std::cout << "0";
    return num;
}

int main()
{
    std::cout << "Write a number between 0 and 255: ";
    int num{};
    std::cin >> num;

    num = printBinary(num, 128);
    num = printBinary(num, 64);
    num = printBinary(num, 32);
    num = printBinary(num, 16);

    std::cout << " ";
    num = printBinary(num, 8);
    num = printBinary(num, 4);
    num = printBinary(num, 2);
    num = printBinary(num, 1);
    return 0;
}
