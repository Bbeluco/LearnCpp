#include <iostream>

struct Employee {
    int id{};
    int age{};
    double wage{};
};

int main() {
    Employee bbeluco{};
    Employee giovana{};

    bbeluco.id =3;
    giovana.id = 2;

    std::cout << bbeluco.id << '\n';
    std::cout << giovana.id << '\n';
    return 0;
}
