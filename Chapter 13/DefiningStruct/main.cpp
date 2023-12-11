#include <iostream>

struct Employee {
    int id{}; //This works the same way as normal variables
    int age{};
    double wage{};

    std::string role; //Bc we dont provide any initialization this variable generates UB
};

int main() {
    Employee bbeluco{};
    Employee giovana{};
    Employee emp3{1, 2, 30.5}; //Memberwise initialization
    const Employee constEmp{1}; //Once instantiated, none of the inside values can change


    bbeluco.id =3;
    giovana.id = 2;
    giovana = {giovana.id, 21, 700.0};

    std::cout << bbeluco.id << '\n';
    std::cout << giovana.id << '\n';

    std::cout << emp3.wage << '\n';
    std::cout << "Current role is: "<< emp3.role << '\n';
    return 0;
}
