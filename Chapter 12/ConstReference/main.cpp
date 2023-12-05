#include <iostream>

int main()
{
    const int x{5};
    const int& re{x};

    std::cout << re << '\n';

    int y{3};
    const int& reY{y};

    std::cout << reY << '\n';
    return 0;
}
