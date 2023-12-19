#include <iostream>

class Foo {
public:
    Foo(int x, int y) {
        std::cout << "Foo constructor -> ";
        std::cout << "X: " << x << ' ' << "Y: " << y << '\n';
    }

    int getX() { return m_x; }
    int getY() { return m_y; }

private:
    int m_x{};
    int m_y{};
};

class Bar {
public:
    Bar(int x, int y) {
        m_x = x;
        m_y = y;

        std::cout << "Bar constructor -> ";
        std::cout << "X: " << x << ' ' << "Y: " << y << '\n';
    }

    int getX() { return m_x; }
    int getY() { return m_y; }

private:
    int m_x{};
    int m_y{};
};

template<typename T>
void printCurrentValues(T& foo) {
    std::cout << "X: " << foo.getX() << ' ' << "Y: " << foo.getY() << '\n';
}

int main() {
    Foo f{2,3};
    std::cout << "\nFoo\n";
    printCurrentValues(f);

    Bar b{2,3};
    std::cout << "\nBar\n";
    printCurrentValues(b);
    return 0;
}