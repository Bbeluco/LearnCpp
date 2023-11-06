#include <iostream>

//This function don't know that x/y of line 9/10 exists bc of scope
//In C++ scope starts and ends based on curly braces and var initialization
int add(int x, int y) {
    return x + y;
}

int main()
{
    int x {5};
    int y {6};
    std::cout << add(x,y) << '\n';
    return 0;
}
