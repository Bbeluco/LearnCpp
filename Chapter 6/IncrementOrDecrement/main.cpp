#include <iostream>

int main()
{
    int x{5};
    int y{x++};

    int z{3+2};

    std::cout << x++ << '\n';
    std::cout << x << " " << y << " " << z << '\n';
    return 0;
}
