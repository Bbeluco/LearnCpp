#include <iostream>

class Accumulator {
public:
    void add(int value) { m_value += value; }

    friend void print(const Accumulator& accumulator);
private:
    int m_value{0};
};

void print(const Accumulator& accumulator) {
    std::cout << accumulator.m_value << '\n';
}

int main() {
    Accumulator a{};
    a.add(23);
    print(a);
    return 0;
}