#include <iostream>

int main()
{
    char a{'a'};
    char b{98}; //not preferred

    std::cout << a << b << '\n';

    std::cout << "Enter a char: ";
    char inp_user{};
    std::cin >> inp_user;
    std::cout << inp_user;
    return 0;
}
