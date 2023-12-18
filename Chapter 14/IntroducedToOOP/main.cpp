#include <iostream>

struct Cat {
    std::string_view name{"cat"};
    int legs{4};
};

struct Dog {
    std::string_view name{"dog"};
    int legs{4};
};

struct Chicken {
    std::string_view name{"chicken"};
    int legs{2};
};

struct Snake {
    std::string_view name{"snake"};
    int legs{0};
};

template<typename T>
void printInfo(T animal) {
    std::cout << "A " << animal.name << " has " << animal.legs << " legs\n";
}

int main(){
    constexpr Chicken chicken{};
    printInfo(chicken);

    constexpr Snake snake{};
    printInfo(snake);
}