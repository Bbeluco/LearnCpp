#include <iostream>
int main()
{
    int x{};

    if(x == 0)
        std::cout << "Hello world!" << '\n';

    std::cout << "Enter a digit: ";
    int y{};
    std::cin >> y;

    if(y == 0) {
        std::cout << "The value is zero";
    } else if(y > 0) {
        std::cout << "The value is greater than zero";
    } else {
        std::cout << "The value is less than zero";
    }
    return 0;
}
