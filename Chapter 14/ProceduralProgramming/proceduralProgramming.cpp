#include <iostream>

enum class AnimalType {
    cat,
    dog,
    chicken,
    snake
};

constexpr std::string_view animalName(AnimalType& type) {
    switch (type) {
    case AnimalType::cat:
        return "cat";
    case AnimalType::dog:
        return "dog";
    case AnimalType::chicken:
        return "chicken";
    case AnimalType::snake:
        return "snake";
    default:
        return "";
    }
}

constexpr int numberOfLegs(AnimalType& type) {
    switch (type) {
    case AnimalType::cat:
    case AnimalType::dog:
        return 4;
    case AnimalType::chicken:
        return 2;
    case AnimalType::snake:
    default:
        return 0;
    }
}

int main() {
    AnimalType animal{AnimalType::snake};
    std::cout << "A " << animalName(animal) << " has " 
        << numberOfLegs(animal) << " legs.\n";
}