#include <iostream>

void isPrime(int x){
    if(x > 10) {
        std::cout << "The number is invalid\n";
        return;
    }

    if(x == 2) {
        std::cout << "The digit is prime\n";
    } else if(x == 3){
        std::cout << "The digit is prime\n";
    } else if(x == 5) {
        std::cout << "The digit is prime\n";
    } else if(x==7) {
        std::cout << "The digit is prime\n";
    } else {
        std::cout << "The digit is not prime\n";
    }
}

int main()
{
    std::cout << "Enter a integer between 0 and 9: ";
    int x{};
    std::cin >> x;

    isPrime(x);
    return 0;
}
