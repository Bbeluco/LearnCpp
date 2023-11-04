#include <iostream>
#include <string>

int main()
{
    std::cout << "Welcome to the Hi program :) \n";
    std::cout << "Whats you name? \n";

    std::string name{};
    std::cin >> name;

    std::cout << "\nHi " << name << '\n';
    return 0;
}
