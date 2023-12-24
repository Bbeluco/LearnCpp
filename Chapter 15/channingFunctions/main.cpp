#include <iostream>

class Math{
public:
    Math& add(int n) { 
        m_value += n; 
        return *this; //Dereference pointer this
    }
    Math& sub(int n) { m_value -= n; return *this; }
    Math& mult(int n) { m_value *= n; return *this; }

    int getValue() const { return m_value; }

    void reset() { *this = {}; }

private:
    int m_value{0};
};

void print(const Math& m) {
    std::cout << "Result: " << m.getValue() << '\n';
}

int main() {
    Math m{};
    m.add(10).sub(2).mult(3);
    m.reset();

    print(m);
    return 0;
}