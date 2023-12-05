#include <iostream>
#include <typeinfo>

int main() {
    int x{5};
    int y{1};
    int* ptr {&x};

    std::cout << *ptr << '\n';

    ptr = &y;

    std::cout << *ptr << '\n';

    std::cout << typeid(&x).name() << '\n';
    std::cout << sizeof(ptr) << '\n'; //Depends on the archtecture, 64 bits has 64 bits to store a info in memory

    return 0;
}
