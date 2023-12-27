#include "headers/Monster.hpp"
#include "headers/MonsterGenerator.hpp"

#include <iostream>

int main() {
    Monster m{ MonsterGenerator::generate() };

    m.print();
    return 0;
}