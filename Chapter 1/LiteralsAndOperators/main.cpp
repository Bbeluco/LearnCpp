#include <iostream>

int main()
{
    int x{5}; //This is a literal value, this mean I'm set a constant value in the code
    std::cout << x << '\n';

    std::cout << 4 + 2 << '\n';

    //Look how the same operator (operator-) can be used in 2 cases, unary and binary cases
    std::cout << -5 << '\n';
    std::cout << 5 - 2 << '\n';

    int a,b;
    a = b = 5;

    std::cout << a;
    return 0;
}
