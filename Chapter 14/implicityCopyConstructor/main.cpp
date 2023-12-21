#include <iostream>

class IntPair {
public:
    void setX(int x) { m_x = x; }
    void setY(int y) { m_y = y; }
    
    void print() {
        std::cout << "X: " << m_x << " Y: " << m_y << '\n'; 
    }

private:
    int m_x{};
    int m_y{};
};

int main() {

    IntPair p{};
    p.setX(1);
    p.setY(2);

    IntPair pCopy{p};

    p.print();
    pCopy.print();
    return 0;
}