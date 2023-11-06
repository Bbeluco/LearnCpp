#include <iostream>

int getValueFromUserInput() {
    std::cout << "Enter a integer: ";
    int num{};
    std::cin >> num;
    return num;
}

int main()
{
    int x{getValueFromUserInput()};
    int y{getValueFromUserInput()};
    std::cout << x << " double is: " << x*2 << '\n';
    std::cout << y << " double is: " << y*2 << '\n';
    return 0;
}
