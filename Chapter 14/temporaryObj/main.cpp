#include <iostream>
/*
    The idea here is to create an obj to be used only in 1 place and discart it after usage
    This makes the code cleaner to read, assuming you just have 1 place to look and dont need
    to find out were that variable is used
*/

class IntPair {
public:
    int getX() { return m_x;}
    int getY() { return m_y;}

    IntPair(int x, int y)
    : m_x{x}
    , m_y{y}
    {}

private:
    int m_x{};
    int m_y{};
};

void print(IntPair p) {
    std::cout << "X: " << p.getX() << " Y: " << p.getY() << '\n';
}

IntPair create() {
    return {1,1};
}

int main() {

    //Case 1: We pass type (IntPair) + constructor info ({2,3})
    print(IntPair {2,3});

    //Case 2: We omit type and just pass constructor info ({5,6})
    print({5,6});

    print(create());
    return 0;
}