#include <iostream>

void printInScreen() {
    std::cout << "Joe\n";
    #if 0 //Another way to make comments and dont compile some part of code
        std::cout << abc();
        std::cout << "Steve\n";
    #endif // 0
}
