#include <iostream>

//Advantages of Enum class (A.K.A scoped enumerations)
/*
 - Strongly typed (NOT implicity converted integer)
 - Enumerator dont have same scope as enumeration (In this case the scope is inside Enumerators)
*/

//Disadvantages of Enum class
/*
 - we need to convert it before use std::cout bc of the strongly type
*/

int main() {
    enum class Colors {
        red,
        blue
    };

    enum class Fruits {
        apple,
        pear
    };

    Colors c{Colors::red};
    Fruits f{Fruits::pear};

     std::cout << c << '\n';
    std::cout << f << '\n';
    return 0;
}
