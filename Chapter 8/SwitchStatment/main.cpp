#include <iostream>

using namespace std;

int main()
{
    int x{1};

    switch (x) {
    case 1:
        std::cout << "One\n";
        break;
    case 2:
        std::cout << "Two\n";
        break;
    case 3:
        std::cout << "Three\n";
        break;
    default:
        std::cout << "Int";
        break;
    }

    return 0;
}
