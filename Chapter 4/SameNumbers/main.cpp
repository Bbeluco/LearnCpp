#include <iostream>

bool isEqual(int x, int y) {
    return (x==y);
}


int main()
{
    std::cout << "Enter the first integer: ";
    int x{};
    std::cin >> x;


    std::cout << "Enter the second integer: ";
    int y{};
    std::cin >> y;

    if(isEqual(x,y)) {
        std::cout << x << " and " << y << " ARE equal\n";
    } else {
        std::cout << x << " and " << y << " ARE NOT equal\n";
        if(x > y) {
            std::cout << x << " is greater than " << y << '\n';
        } else {
            std::cout << y << " is greater than " << x << '\n';
        }
    }
    return 0;
}
