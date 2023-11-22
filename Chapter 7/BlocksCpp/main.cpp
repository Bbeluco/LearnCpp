#include <iostream>

int get_user_input_number() {
    std::cout << "Enter a integer: ";
    int x{};
    std::cin >> x;

    return x;
}


int main()
{ //Block level 1
    int num{get_user_input_number()};
    if(num > 0) { //block level 2
        std::cout << "Positive number\n";
        std::cout << "The double is " << num * 2 << '\n';
        if(num % 2 == 0) { //Block level 3
            std::cout << "Even";
        }
    } else {
        std::cout << "Negative number\n";
        std::cout << "The positive is " << -num << '\n';
    }

    return 0;
}
