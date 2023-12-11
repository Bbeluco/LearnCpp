#include <iostream>

struct Employee {
    int id{};
    int age{};
    double wage{};
};

struct Animal{
    struct Paw {
        int claws{};
    };

    std::string name{};
    Paw paw{};
};


int main() {
    Employee emp{1,21,7000};
    Employee* ptr{&emp};
    std::cout << (*ptr).id << '\n'; //Ugly way to dereference pointers of struct

    std::cout << ptr->id << '\n'; //Arrow operator (implicity dereference)

    Animal a{"Leopard", {4}};
    Animal* animalPtr{&a};

    std::cout << animalPtr->paw.claws << '\n';
    return 0;
}
