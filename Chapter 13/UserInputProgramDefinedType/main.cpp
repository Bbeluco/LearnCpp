#include <iostream>

enum Pet {
    dog,
    whale,
    cat,
    fox
};

int main()
{
    std::cout << "OPTIONS:\n";
    std::cout << "(1) Dog\n";
    std::cout << "(2) Whale\n";
    std::cout << "(3) Cat\n";
    std::cout << "(4) Fox\n";
    std::cout << "Input a number of a animal: ";

    int option{};
    std::cin >> option;

    Pet p {static_cast<Pet>(option)};

    std::cout << p << '\n';
    return 0;
}
