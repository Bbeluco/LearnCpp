/*
    It is not possible to create a array of references in common way,
    the workaround for this issue is create a array with std::reference_wrapper type

    This will "confuse" the compiler and it will let you use a reference 
*/

#include <array>
#include <iostream>
#include <functional>

int main() {
    int x{1};
    int y{2};
    int z{3};

    std::array<std::reference_wrapper<int>, 3> arr { x,y,z };
    arr[1].get() = 10;

    std::cout << "Y: " << arr[1] << " Y1: " << y << '\n';

    return 0;
}