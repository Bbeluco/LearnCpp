#include <string>
#include <iostream>

/*
    *Prefer non-member functions over member functions
    *It's recommended that member func should only be a bridge to private member
    *We use member funcs this way to control and encapsulate the implementation logic inside the "acessors"
    *You can think like a car clutch, a mechanic can change it and you can still use it in the same old way
*/

class Person {
public:
    std::string_view getName() { return m_name; }
//Modern C++ prefers public methods declared before private members

private:
    std::string m_name{"Bruno"};
};

void print(std::string_view name) {
    std::cout << "The name is: " << name << '\n';
}

int main() {
    Person person{};
    print(person.getName());
    return 0;
}