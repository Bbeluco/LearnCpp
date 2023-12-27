#include <string>
#include <iostream>

/*
    Ref-qualifier means that only lvalue OR rvalue can invoke this function
    This guarantees that the user will not fall into a path with dagling reference

    Ref-qualifier creates an overload on the return statment. This ensures that the
    user even if desired wont create a dagling reference
*/

class Person{
public:
    const std::string& getName() & { return m_name; } //This is a ref qualifier = Lvalue

    const std::string getName() && { return m_name; } //This is a ref qualifier = Rvalue


private:
    std::string m_name{"Bruno"};
};

int main() {
    Person p{};

    std::cout << p.getName() << '\n';

    return 0;
}