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
    return 0;
}
