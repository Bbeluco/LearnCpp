#include <iostream>

int main()
{
    double x{};
    tryAgain:
        std::cout << "Enter a positive number: ";
        std::cin >> x;

        if(x < 0.0){
            goto tryAgain;
        }

    std::cout << "Thanks!\n";
    return 0;
}
