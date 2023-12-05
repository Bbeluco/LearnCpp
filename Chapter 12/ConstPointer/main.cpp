#include <iostream>

int main() {
    const int x{5};

    const int* cRef{&x}; // Pointer to const = Meas the value cannot be changed, and enable pointer to hold const value

    int y{8};
    int* const re{&y}; //Const pointer = The address cannot be changed

    const int z{1};
    const int* const contIntoConstRef{&z}; // Const pointer + Pointer to const

    std::cout << *cRef << '\n';
    std::cout << *re << '\n';
    std::cout << *contIntoConstRef << '\n';
    return 0;
}
