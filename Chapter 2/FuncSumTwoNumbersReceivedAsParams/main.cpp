#include <iostream>

int getValueFromUserInput() {
    std::cout << "Enters a integer: ";
    int num {};
    std::cin >> num;

    return num;
}

void sumNumbers(int x, int y) {
    std::cout << "The sum of these 2 values is: " << x + y << '\n';
}

int main()
{
    int x{ getValueFromUserInput() };
    int y{ getValueFromUserInput() };

    sumNumbers(x, y);
    return 0;
}
