#include <iostream>

namespace math_calcs{
    void calculate(int x, int y, char op){
        std::cout << "The result is: ";

        switch(op){
        case '+':
            std::cout << x + y << '\n';
            break;
        case '-':
            std::cout << x - y << '\n';
            break;
        case '*':
            std::cout << x * y << '\n';
            break;
        case '/':
            std::cout << x * y << '\n';
            break;
        case '%':
            std::cout << x % y << '\n';
            break;
        default:
            std::cout << "?" << '\n';
            std::cout << "The chosen math operator is invalid\n";
        }
    }
}

namespace user_io{
    int get_integer_from_user_input() {
        std::cout << "Enter a integer: ";
        int n{};
        std::cin >> n;

        return n;
    }

    char get_math_operator_from_user_input() {
        std::cout << "Choose an operator. Options [+, -, *, /, or %]: ";
        char op{};
        std::cin >> op;

        return op;

    }
}

int main()
{
    int x{user_io::get_integer_from_user_input()};
    int y{user_io::get_integer_from_user_input()};
    int op{user_io::get_math_operator_from_user_input()};

    math_calcs::calculate(x,y,op);
    return 0;
}
