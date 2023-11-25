#include <iostream>

int main()
{
    int x{1};

    switch(x) {
    case 1:
        std::cout << "One\n";
        [[fallthrough]];
    case 2:
        std::cout << "Two\n";
    case 3:
        std::cout << "Three\n";
    }
    return 0;
}
