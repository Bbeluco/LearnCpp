#include <iostream>

enum class Animal {
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal& animal) {
    switch(animal){
    case Animal::pig:
        return "pig";
    case Animal::chicken:
        return "chicken";
    case Animal::goat:
        return "goat";
    case Animal::cat:
        return "cat";
    case Animal::dog:
        return "dog";
    case Animal::duck:
        return "duck";
    default:
        return "???";
    }
}

constexpr std::string_view printNumberOfLegs(Animal& animal) {
    switch(animal) {
    case Animal::cat:
    case Animal::dog:
    case Animal::pig:
    case Animal::goat:
         return "4";
    case Animal::chicken:
    case Animal::duck:
        return "2";
    default:
        return "???";
    }
}

void printResult(std::string_view animalName, std::string_view animalLegs) {
    std::cout << "A " <<  animalName  << " has "
    <<  animalLegs << " legs."<< '\n';
}

int main() {
    Animal cat{Animal::cat};
    Animal chicken{Animal::chicken};

    printResult(getAnimalName(cat), printNumberOfLegs(cat));
    printResult(getAnimalName(chicken), printNumberOfLegs(chicken));
    return 0;
}
