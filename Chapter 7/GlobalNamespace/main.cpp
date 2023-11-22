#include <iostream>

void print() {
    std::cout << "GLOBAL declaration\n";
}

namespace exp {
    void print() {
        std::cout << "LOCAL declaration\n";
    }

    void printScopes() {
        print();
        ::print(); // :: gets the global declaration
    }
}

int main()
{
    exp::printScopes();
    return 0;
}
