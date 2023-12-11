#include <iostream>

struct Company {
    struct Employee { //As the struct is only used in Company struct it is a better practice to put it inside struct
        int id{};
        int age{};
        double wage{};
    };

    int number_of_employees{};
    Employee CEO{};
};

int main() {
    Company comp{13, {1, 44, 1'000'000.35}};

    std::cout << comp.CEO.wage << '\n';
    return 0;
}
