#include <iomanip> // for output manipulator std::setprecision()
#include <iostream>

int main()
{
    std::cout << 5.6f << '\n';
    std::cout << 4.0 << '\n'; //If not specified as f the compiler turns it to a int


    std::cout << '\n';

    //The default significant digit output its always 6
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    std::cout << '\n';
    std::cout << std::setprecision(17);
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    return 0;
}
