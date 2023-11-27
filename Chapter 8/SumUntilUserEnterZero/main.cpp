#include <iostream>

int main()
{

    int total{};
    while(true) {
        std::cout << "Enter a number to add, or 0 to exit: ";
        int number{};
        std::cin >> number;

        if(!number)
            break;

        total+=number;
    }

    std::cout << "The sum of all the numbers you entered is: " << total << '\n';
    return 0;
}
