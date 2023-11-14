#include <iostream>

char enter_some_char() {
    std::cout << "Enter a single char: ";
    char ch{};
    std::cin >> ch;

    return ch;
}


int main()
{
    char ch{enter_some_char()};
    int numChar{ch};
    std::cout << "You entered '" << ch << "', which has ASCII code " << numChar << ".\n";
    return 0;
}
