#include <iostream>

namespace constants {
    double gravity{9.8};
}

int main()
{
    int x{0};

    std::cout << constants::gravity; //Qualified-name bc it has a scope defined(::)
    std::cout << x; //Unqualified-name

    using std::cout;

    cout << "Hello\n";
    return 0;
}
