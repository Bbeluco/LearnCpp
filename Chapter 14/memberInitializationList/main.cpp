#include <iostream>


class Foo {
public:
    Foo(int x, int y) 
    : m_x{x}, m_y{y} // here's our member initialization list
    {
        std::cout << "Constructor(" << m_x << ',' << m_y << ")\n";
    }

private:
    int m_x{};
    int m_y{};
};

int main() {
    Foo f{1,2};
    return 0;
}