#include <iostream>
#include <limits>

void ignoreBufferRemains();

double getNumber() {
    while(true){
        std::cout << "Enter a double: ";
        double n{};
        std::cin >> n;

        if(std::cin.fail()){ //This is triggered when the input is invalid. This is call failure mode
            std::cin.clear(); //Clear the failure mode
            ignoreBufferRemains();
        } else {
            ignoreBufferRemains();
            return n;
        }
    }
}

void ignoreBufferRemains(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore 100 chars from the buffer until \n
}

char getMathOperator(){
    while(true){
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op{};
        std::cin >> op;

        switch(op){
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::cout << "Pls, enter a valid math operator\n";

        }
    }
}

void calculate(double x, double y, int op){
    switch(op){
        case '+':
            std::cout << x << '+' << y << " = " << x+y;
            break;
        case '-':
            std::cout << x << '-' << y << " = " << x-y;
            break;
        case '*':
            std::cout << x << '*' << y << " = " << x*y;
            break;
        case '/':
            std::cout << x << '/' << y << " = " << x/y;
            break;
    }
}

int main()
{
    double n1{getNumber()};
    char op{getMathOperator()};
    double n2{getNumber()};
    calculate(n1, n2, op);
    return 0;
}
