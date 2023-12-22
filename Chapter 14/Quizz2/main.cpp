#include <iostream>

class Fraction {
public:
    void set_numerator(int numerator) { m_numerator = numerator; }
    void set_denominator(int denominator) {
        if(denominator == 0){
            m_denominator = 1;
            std::cout << "denominator changed to 1\n";
            return;
        }
        m_denominator = denominator; 
    }

    Fraction multiply(const Fraction& f2) const {
        Fraction result{};
        result.set_numerator(m_numerator * f2.m_numerator);
        result.set_denominator(m_denominator * f2.m_denominator);
        return result;
    }

    void printFraction() const {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }


private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
};

Fraction getFraction() {
    std::cout << "Enter a value for numerator: ";
    int numerator{};
    std::cin >> numerator;
    std::cout << "Enter a value for denominator: ";
    int denominator{};
    std::cin >> denominator;
    std::cout << '\n';

    Fraction f{};
    f.set_numerator(numerator);
    f.set_denominator(denominator);
    return f;
}

int main()
{
    Fraction f1{ getFraction() };
    Fraction f2{ getFraction() };

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}