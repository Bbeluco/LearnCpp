#include <iostream>

int add(int x, int y); //This line tells the compiler that we'll have a func called add with this params
//The strategy above allow us to declare function statements in whatever order we want

int main()
{
    std::cout << add(5, 7) << '\n';
    return 0;
}


int add(int x, int y) {
    return x + y;
}
