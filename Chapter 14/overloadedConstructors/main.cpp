#include <iostream>

class Foo {
public:
    Foo() {
        std::cout << "Default constructor\n";
    }

    Foo(int x, int y) {
        std::cout << "Constructor with params\n";
    }
};

int main() {
    Foo f{};
    Foo a{1,2};

    return 0;
}