#include <iostream>
int main() {
    int x{3};
    int& re{x};


    std::cout << x << re << '\n';

    x = 4;
    std::cout << x << re << '\n';

    re = 8;
    std::cout << x << re << '\n';
    return 0;
}
