#include <iostream>

//Pass by reference when you can, pass by address when you must

void print(const int* address) {
    std::cout << *address << '\n';
}

void changeValue(int* address) {
    *address = 6;
}

void greet(std::string* name = nullptr) {
    std::cout << "Hello " << (name ? *name : "guest") << '\n';
}

int main() {
    int x{3};

    changeValue(&x);
    print(&x);

    greet();

    std::string bbeluco{"Bruno"};
    greet(&bbeluco);
    return 0;
}
