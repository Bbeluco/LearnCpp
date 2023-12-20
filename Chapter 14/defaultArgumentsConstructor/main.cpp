#include <iostream>

class Foo {
public:
    Foo(int x=0, int y=0)
    : m_x{x}
    , m_y{y} 
    {
    }

    void print() {
        std::cout << "X: " << m_x << " Y: " << m_y << '\n';
    }

private:
    int m_x{};
    int m_y{};
};

int main() {
    Foo f{};
    Foo f1{5,5};

    f.print();
    f1.print();
    return 0;
}