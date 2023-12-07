#include <iostream>

//Pass by reference when you can, pass by address when you must

void print(const int* address) {
    std::cout << *address << '\n';
}

void changeValue(int* address) {
    *address = 6;
}

int main() {
    int x{3};

    changeValue(&x);
    print(&x);
    return 0;
}
