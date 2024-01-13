#include <iostream>
#include <array>

/*
    When we declare array we must set the exact size of it

    One way to bypass it and let the function accept arrays of any size
    is to put the second template argument in a template parameter just like "print_template" is doing
*/


void print(const std::array<int, 5>& arr) {
    for(int n : arr) {
        std::cout << n << ' ';
    }

    std::cout << '\n';
}

template<typename T, std::size_t N>
void print_template(const std::array<T, N>& arr) {
    for(int n : arr) {
        std::cout << n << ' ';
    }

    std::cout << '\n';
}

template<std::size_t N>
void print3(const std::array<int, N>& arr) {
    std::cout << std::get<3>(arr) << '\n';
}

int main() {
    std::array<int, 5> numbers{1,2,3,4,5};
    print(numbers);
    print_template(numbers);

    //The following code give us a compile error bc
    //std::get<3>(arr) has a compile time bound checking bc it has a template parameter
    //And in C++ every template parameter has a compile time checking 
    std::array<int, 3> wrong_size{1,2,3};
    print3(wrong_size);
    return 0;
}