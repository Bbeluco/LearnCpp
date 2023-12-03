#include <iostream>

//FW = forward declaration
//Prefer specify default arguments in FW
void printNums(int x, int y = 3);

int main()
{
    printNums(1,2);
    printNums(3);
    return 0;
}

void printNums(int x, int y) { //If FW has default arguments definition it can't be set in func definition
    std::cout << x << ' ';
    std::cout << y << '\n';
}
