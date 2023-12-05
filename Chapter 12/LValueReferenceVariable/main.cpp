#include <iostream>

int main()
{
    int x{5};
    int& referen{x};
    int &newReference{x}; //For the compilers perspective, it doesn't matter where the ampersand(&) is.
    std::cout << x << '\n';
    std::cout << referen << '\n';
    std::cout << newReference << '\n';
    return 0;
}
