#include <iostream>
int value{3};

int main()
{
    int apples{5};
    value = 10;

    {
        std::cout << apples << '\n';
        apples = 3;
        std::cout << apples << '\n';

        int apples{4};
        std::cout << apples << '\n';
    }
    std::cout << apples << '\n';
    std::cout << value << '\n';
    return 0;
}
