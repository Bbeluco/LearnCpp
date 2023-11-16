#include <iostream>

char a() {
    return 'A';
}

constexpr int b() {
    char teste{a()}; //This dont work bc constexpr cannot call a non-constexpr function

    return 1;
}

int main()
{
    std::cout << a() << '\n';
    return 0;
}
