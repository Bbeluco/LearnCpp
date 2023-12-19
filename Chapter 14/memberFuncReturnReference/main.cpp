#include <iostream>
#include <string>

class Person {
private:
    std::string m_name{"Bruno"};
    int m_age{21};

public:
    const std::string& getName() const { return m_name; }
    int& getAge() { return m_age; } //ALWAYS AVOID THIS CASE
};

int main(){
    Person p{};

    p.getAge() = 1;
    std::cout << p.getName() << '\n';
    std::cout << p.getAge() << '\n';
}