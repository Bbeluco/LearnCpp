#include <vector>
#include <iostream>

/*
    Even if we dont have to specify type in the initilization of the vector (line XXXXXX)
    we must include it in the parameter expected (line XXXXXX)
*/
template<typename T>
void printVectorFirst(const std::vector<T>& n) {
    std::cout << n[0] << '\n';
}

int main() {
    std::vector int_numbers{ 1,2,3 };
    printVectorFirst(int_numbers);

    std::vector double_numbers { 1.1, 2.2, 3.3 };
    printVectorFirst(double_numbers);
    return 0;
}