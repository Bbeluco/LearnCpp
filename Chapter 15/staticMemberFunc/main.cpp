#include <iostream>

class Something{
public:
    static int getId() { return m_id; }
private:
    static inline int m_id{1};
};

int main() {
    std::cout << Something::getId() << '\n';
    return 0;
}