#include <iostream>

double askForValue() {
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char askForMathOperator() {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;

    return op;
}

double calculateResult(double x, double y, char mathOperator) {
    double result{};
    if(mathOperator == '+') {
        result=x+y;
    } else if(mathOperator == '-') {
        result=x-y;
    } else if(mathOperator == '*') {
        result=x*y;
    } else if(mathOperator == '/') {
        result=x/y;
    }

    return result;
}

bool shouldPrint(char mathOperator) {
    return mathOperator == '+' || mathOperator == '-'|| mathOperator == '*'|| mathOperator == '/';
}

int main()
{
    double x{ askForValue() };
    double y{ askForValue() };
    char mathOperator{ askForMathOperator() };

    if(shouldPrint(mathOperator)){
        std::cout << x << mathOperator << y
            << " is " << calculateResult(x,y,mathOperator) << '\n';
    }
    return 0;
}
