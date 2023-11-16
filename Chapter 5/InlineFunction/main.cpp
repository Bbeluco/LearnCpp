#include <iostream>

inline int min(int x, int y) {
    return ((x < y) ? x : y);
}

int main()
{
    std::cout << min(1,2) << '\n';
    return 0;
}
