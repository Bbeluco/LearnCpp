#include <iostream>
#include "headers/Fruit.hpp"

// class Fruit {
// public:
//     enum Type {
//         apple,
//         banana,
//         pear
//     };

//     Fruit(Type f)
//     : m_fruit{f}
//     {}

//     Type getFruit() const { return m_fruit; }
//     int getPercentageEaten() const { return m_percentageEaten; }

//     bool isApple() { return m_fruit == Fruit::apple;}

// private:
//     Type m_fruit{};
//     int m_percentageEaten;
// };

int main() {
    Fruit f{Fruit::banana};
    std::cout << f.isApple() << '\n';
    return 0;
}