#include <iostream>
#include "io.h"

int readNumber() {
    std::cout << "Enter a integer: ";
    int num {};
    std::cin >> num;

    return num;
}

void writeAnswer(int result) {
    std::cout << "Your result is: " << result << '\n';
}
