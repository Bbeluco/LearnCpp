#include <iostream>

//Enumerator(name of the fields inside enumerated type)
//Sent to same scope as its enumeration(Colors by example)
//NAMING COLLISION its possible bc of this

//Another way to reduce the naming collision chance is to put
//enum inside functions

namespace Rainbow{
    enum Colors{
        red,
        green,
        blue
    };
}

enum Pets{
    dog,
    cat,
    beer,
};

int main()
{
    Rainbow::Colors shirt{Rainbow::Colors::green};
    Pets animal1{Pets::cat};
    Pets animal2{dog};

    std::cout << shirt << '\n';
    std::cout << animal1 << '\n';
    std::cout << animal2 << '\n';
    return 0;
}
