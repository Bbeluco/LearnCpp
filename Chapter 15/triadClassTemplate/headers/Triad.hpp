#ifndef TRIAD_H
#define TRIAD_H

#include <iostream>

template<typename T, typename U, typename N>
class Triad {
public:
    Triad(const T& first, const U& second, const N& third)
    : m_first{first}
    , m_second{second}
    , m_third{third}
    {}

    void print() const;

    const T& first() const { return m_first; }

private:
    T m_first{};
    U m_second{};
    N m_third{};
};

template<typename T, typename U, typename N>
void Triad<T, U, N>::print() const {
    std::cout << "[" << m_first << ", " << m_second << ", " << m_third << "]\n";
}

#endif