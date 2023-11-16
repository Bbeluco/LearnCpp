#include <iostream>

int greater(int x, int y) {
    return ((x > y) ? x : y); //Cover all the compound expression with parenthesize
}

int main()
{
    std::cout << greater(2,3) << '\n';
    return 0;
}
