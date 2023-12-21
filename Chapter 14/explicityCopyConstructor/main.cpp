#include <iostream>

class Fraction{
public:
    Fraction(int numerator=0, int denominator=1) 
    : m_numerator{numerator}
    , m_denominator{denominator}
    {
        std::cout << "Normal constructor called\n";
    }

    Fraction(Fraction& f) 
    : m_numerator{f.m_numerator}
    , m_denominator{f.m_denominator}
    {
        std::cout << "Fraction copy constructor executed\n";
    }

    void print(){
        std::cout << "Fraction(" << m_numerator << ',' << m_denominator << ")\n";
    }

private:
    int m_numerator{};
    int m_denominator{1};
};

int main() {
    Fraction fNormal{1,2};
    Fraction fCopy{fNormal};

    fNormal.print();
    fCopy.print();
    return 0;
}