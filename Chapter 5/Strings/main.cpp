#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color);

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

    std::cout << "Your name has size of: " << name.length() << '\n';

    using namespace std::literals::string_literals;

    std::cout << "I'm a string"s;
    return 0;
}
