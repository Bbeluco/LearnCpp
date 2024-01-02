#include <vector>
#include <iostream>

int main() {
    std::vector<int> empty{};
    std::vector<int> primes{2,3,5,7};
    std::vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    std::vector<int> lot_of_itens(10); //Initialize 10 itens with zero

    std::cout << "The first number is: " << primes[0] << '\n';
    std::cout << "The third vowel is: " << vowels[2] << '\n';
    std::cout << "Last element in 'lot_of_itens': " << lot_of_itens[9] << '\n';
    return 0;
}