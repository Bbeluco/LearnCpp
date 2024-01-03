#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std::literals::string_view_literals;

int main() {
    const std::vector<std::string_view> words{ "fizz"sv, "buzz"sv, "pop"sv, "bang"sv, "jazz"sv, "pow"sv, "boom"sv };
    const std::vector<int> divisors{ 3, 5, 7, 11, 13, 17, 19};

    assert(words.size() == divisors.size() && "Different sizes between words and divisors");

    for (size_t i = 1; i < 150; i++) {
        bool divisible{false};
        for(size_t j{0}; j < divisors.size(); ++j) {
            if(i % divisors[j] == 0){
                std::cout << words[j];
                divisible = true;
            }
        }
        if(!divisible){
            std::cout << i;
        }

        std::cout << '\n';
    }
    
    return 0;
}