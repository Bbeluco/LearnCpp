#include <iostream>

int main() {
    int x{5};
    int* prt{}; //Value initializing means its a null pointer
    int* prtN{nullptr};

    if(prt == nullptr) {
        std::cout << "NULL POINTER\n";
    }
    return 0;
}
