#include <iostream>

int getValueFromUserInput() {
    std::cout << "Enter a integer: ";
    int num{};
    std::cin >> num;

    return num;
}

int doubleNumber(int x) {
    return x * 2;
}

int main()
{
    int x{getValueFromUserInput()};
    std::cout << x << " double is: " << doubleNumber(x) << '\n';
    return 0;
}
