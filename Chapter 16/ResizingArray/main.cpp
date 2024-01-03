#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers { 1,2,3 };
    numbers.resize(5);
    for(int n : numbers) {
        std::cout << n << '\n';
    }

    /*
        Capacity means how many elements can we hold
        Size means how many elements are we holding
    */
    std::cout << "Capacity: " << numbers.capacity() << '\n';
    return 0;
}