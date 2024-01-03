#include <iostream>
#include <vector>

namespace Students {
    enum Names {
        kenny,
        kyle,
        stan,
        butters,
        cartman,
        max_students
    };
}

int main() {
    std::vector<int> ids(Students::max_students);
    std::vector<int> grades { 78, 94, 66, 77, 14 };
    Students::Names name { Students::kyle };
    std::cout << grades[name] << '\n';

    //Students::cartman -> Implicity constexpr
    std::cout << grades[Students::cartman] << '\n';
    return 0;
}