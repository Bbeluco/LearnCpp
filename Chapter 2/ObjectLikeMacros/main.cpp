#include <iostream>

#define MY_NAME "Bruno"
//This is no longer used in C++ projects, in the past, this strategy helps
//C programs to 'create constants'


void printInScreen();

int main()
{
    printInScreen();
    std::cout << "My name is: " << MY_NAME << '\n';
    return 0;
}
