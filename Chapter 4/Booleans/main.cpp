#include <iostream>

int main()
{
    bool a{true};
    bool b{!false};

    std::cout << a << '\n';
    std::cout << b << '\n';


    std::cout << "Enter your boolean choice: ";

    bool test{};
    std::cin >> test;

    std::cout << test << '\n';

    return 0;
}
