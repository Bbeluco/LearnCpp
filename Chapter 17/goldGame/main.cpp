#include <array>
#include <iostream>
#include <string>

struct Item {
    std::string_view name{};
    int gold{};
};

template<std::size_t N>
void printPrice(const std::array<Item, N> items) {
    for(Item i : items) {
        std::cout << "A " << i.name << " costs " << i.gold << " gold.\n";
    }
}

int main() {
    constexpr std::array<Item, 4> items {{
        { "sword", 5}, 
        { "dagger", 3},
        { "club", 2},
        { "spear", 7}
    }};

    printPrice(items);
    return 0;
}