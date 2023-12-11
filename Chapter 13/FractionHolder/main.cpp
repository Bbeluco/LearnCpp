#include <iostream>

struct FractionHolder{
    int numerator{};
    int denominator{1};
};

FractionHolder read_user_fraction() {
    FractionHolder frac{};

    std::cout << "Enter a value for the numerator: ";
    std::cin >> frac.numerator;

    do{
        std::cout << "Enter a value for the denominator: ";
        std::cin >> frac.denominator;
    } while(frac.denominator == 0);

    std::cout << '\n';

    return frac;
}

void print_multiplication_fraction(const FractionHolder& frac1, const FractionHolder& frac2) {
    int numerator_product{frac1.numerator * frac2.numerator};
    int denominator_product{frac1.denominator * frac2.denominator};

    std::cout << "Your fraction multiplied together: "
        << numerator_product << "/" << denominator_product << '\n';
}

int main() {
    FractionHolder frac1{read_user_fraction()};

    FractionHolder frac2{read_user_fraction()};

    std::cout << '\n';
    print_multiplication_fraction(frac1, frac2);
    return 0;
}
