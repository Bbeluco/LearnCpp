#include <iostream>

void print(int x) {
    std::cout << x << '\n';
}

int main()
{
    double x{5.5};
    print(static_cast<int>(x));

    char ch{97};
    std::cout << static_cast<int>(ch) << '\n';
    return 0;
}
