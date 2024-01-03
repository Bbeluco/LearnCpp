#include <iostream>
#include <vector>
#include <cassert>

namespace Animals {
    enum Types {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main() {
    std::vector<int> legs { 2, 4, 4, 4, 2, 0 };

    assert(std::size(legs) == Animals::max_animals);

    std::cout << "The elephant has " << legs[Animals::elephant] << " legs.\n";
    return 0;
}