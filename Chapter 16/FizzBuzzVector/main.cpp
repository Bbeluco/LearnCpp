#include <iostream>
#include <vector>
#include <string>

int main() {
    const std::vector<std::string> words{ "fizz", "buzz", "pop", "bang", "jazz", "pow", "boom" };
    const std::vector<int> divisors{ 3, 5, 7, 11, 13, 17, 19};

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