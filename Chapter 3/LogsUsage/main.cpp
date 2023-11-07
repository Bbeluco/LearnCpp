#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput() {
    PLOGD << "getUserInput() called";
    std::cout << "Enter a digit: ";
    int num{};
    std::cin >> num;

    return num;
}

int main()
{
    plog::init(plog::debug, "Logtext.txt");

    PLOGD << "main() called";

    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';
    return 0;
}
