#include <iostream>

enum Animals{
    dog = 3,
    cat, // By default, if we dont specify any value the value assign to its previous value + 1
    wolf = -1,
    octopus = 10,
};

int main()
{
    Animals a1{dog};
    Animals a2{cat};
    Animals a3{wolf};

    std::cout << a1 << '\n';
    std::cout << a2 << '\n';
    std::cout << a3 << '\n';
    return 0;
}
