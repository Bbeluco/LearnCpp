#include <iostream>


int main()
{
    std::cout << 7.0/4 << '\n';
    std::cout << 7.0/4.0 << '\n';
    std::cout << 7/4.0 << '\n';
    std::cout << 7/4 << '\n'; //This way the fraction is not available

    int x{7};
    int y{4};

    std::cout << static_cast<float>(x)/y << '\n';

    std::cout << "You have 12 apples. Enter how many servings of apples you want: ";
    double d{};
    std::cin >> d;

    std::cout << "Each serving is " << 12/d << " apples.\n";
    return 0;
}
