#include <array>
#include <iostream>
#include <string>
#include <string_view>

namespace Animal {
    enum Type {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };

    struct Data {
        std::string_view name{};
        int legs{};
        std::string_view sound{};
    };

    constexpr std::array<Data, max_animals> animals {{
        {"chicken", 2, "cluck"}, 
        {"dog", 4, "woof"}, 
        {"cat", 4, "meow"}, 
        {"elephant", 4, "pawoo"}, 
        {"duck", 2, "quack"}, 
        {"snake", 0, "hissss"} 
    }};
}

std::string ask_user_animal() {
    std::cout << "Enter an animal: ";
    std::string animal{};
    std::cin >> animal;

    return animal;
}

void print(const std::array<Animal::Data, Animal::max_animals>& arr) {
    for(Animal::Data d : arr) {
        std::cout << "A " << d.name << " has " << d.legs << " legs and says " << d.sound << ".\n";
    }
}

int getAnimal(std::string_view animal) {
    for(size_t i{0}; i < std::size(Animal::animals); ++i) {
        if(animal == Animal::animals[i].name) {
            return i;
        }
    }

    return -1;
}

int main() {
    std::string animal{ ask_user_animal() };
    int found{ getAnimal(animal) };
    if(found == -1) {
        std::cout << "That animal couldn't be found.\n";
    } else {
        std::cout << "A " << Animal::animals[found].name << " has " << Animal::animals[found].legs << " legs and says " << Animal::animals[found].sound << ".\n";
    };
    std::cout << '\n';
    print(Animal::animals);
    return 0;
}