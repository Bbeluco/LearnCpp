#include <string_view>
#include <iostream>

void print(std::string_view str) {
    std::cout << str << '\n';
}

int main()
{
    //string_view is read-only just in memory address level, this type also allows get new values
    std::string_view s { "Hello World! :)" };
    s = "Hi";
    print(s);

    constexpr std::string_view c{ "I'm a constant expression" };
    print(c);


    std::string_view curtain { "Peach" };
    std::cout << curtain << '\n';

    curtain.remove_prefix(1);
    std::cout << curtain << '\n';

    curtain.remove_suffix(2);
    std::cout << curtain << '\n';

    curtain = "Peach";

    std::cout << curtain << '\n';
    return 0;
}
