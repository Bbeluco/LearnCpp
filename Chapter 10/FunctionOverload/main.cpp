#include <iostream>

int add(int x, int y) {
    return x+y;
}

float add(float x, float y) {
    return x+y;
}

int main()
{
    std::cout << add(1,2) << '\n';
    std::cout << add(1.2,2.5f) << '\n';
    return 0;
}
