#include <iostream>
#include <cstdint>

enum Color : std::int8_t {
    black = 65,
    white,
    grey
};

int main()
{
    Color c{black};
    c = white;
    std::cout << "BYTES: " << sizeof(c) << '\n';
    std::cout << c << '\n';
    return 0;
}
