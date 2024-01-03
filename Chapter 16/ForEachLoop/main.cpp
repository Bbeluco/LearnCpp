#include <vector>
#include <iostream>
#include <string>

using namespace std::literals;

int main() {
    std::vector<double> numbers {1.1,2.2,3.3,4.4,5.5,6.6};
    std::vector<std::string> words { "peter"s, "likes"s, "frozen"s, "yogurt"s };

    /*
        Best practice is to use auto keyword to sync the type in vector with the variable
    */
    for(auto n: numbers) {
        std::cout << "Number: " << n << '\n';
    }

    std::cout << '\n';

    /*
        The default way for-each loop words is making copies of each element in array
        This down below, we use const reference, which is much faster than copy
    */
    for(const auto& word : words) {
        std::cout << word << '\n';
    }
    return 0;
}