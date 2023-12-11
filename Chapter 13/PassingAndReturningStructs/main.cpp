#include <iostream>

struct Employee {
    int id{};
    int age{};
    double wage{};
};

void printEmployeeInfo(const Employee& emp) {
    std::cout << "ID: " << emp.id << '\n';
    std::cout << "AGE: " << emp.age << '\n';
    std::cout << "WAGE: " << emp.wage << '\n';
}

struct Point3d {
    double x{};
    double y{};
    double z{};
};

Point3d getZeroPoint() {
    return Point3d {};//Unnamed anonymous obj
}

int main()
{
    Employee bruno{1,21,1320.50};
    Employee giovana{2, 21, 700.0};

    printEmployeeInfo(bruno);
    std::cout << '\n';
    printEmployeeInfo(giovana);


    Point3d coordinates{getZeroPoint()};
    std::cout << '\n';
    std::cout << "X: " << coordinates.x << '\n';
    std::cout << "Y: " << coordinates.y << '\n';
    std::cout << "Z: " << coordinates.z << '\n';
    return 0;
}
