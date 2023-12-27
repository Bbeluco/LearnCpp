#include <iostream>

template<typename T>
class Pair {
public:
    Pair(const T& first, const T& second)
    : m_first{first}
    , m_second{second}
    {}

    bool isEqual() const;

private:
    T m_first{};
    T m_second{};
};


//When declare a member template outside class
//We need to reinsert template definition
//And add type in class using "<>"
template<typename T>
bool Pair<T>::isEqual() const {
    return m_first == m_second;
}

int main() {
    Pair<int> p1{1, 2};

    std::cout << p1.isEqual() << '\n';
    return 0;
}