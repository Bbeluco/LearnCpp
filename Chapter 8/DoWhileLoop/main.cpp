#include <iostream>

int main()
{
    int select{0};

    do{
        std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> select;
    }while((select > 0) && !(select <= 4));

    std::cout << "Thanks to chose";
    return 0;
}
