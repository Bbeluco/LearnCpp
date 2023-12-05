#include <iostream>

void print(std::string& s) {
    std::cout << s << '\n';
}

void addOne(int& y) {
    ++y;
}

int main()
{
    std::string text{"Hello, world!"};

    print(text);


    int x{0};

    std::cout << x << '\n';
    addOne(x);
    std::cout << x << '\n';

    return 0;
}
