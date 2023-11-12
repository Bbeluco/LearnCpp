#include <iostream>

int main()
{
    //Different types of primary fundamentals integers
    short a;
    int b;
    long c;
    long long d;

    //We have also signed int, but it is redundant to add this to our int bc it is the default
    signed int e;

    int x{2'147'483'647};
    std::cout << x << '\n';

    x++;

    std::cout << x << '\n';

    int y = 2'147'483'649;
    std::cout << y << '\n';
    return 0;
}
