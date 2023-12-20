#include <iostream>
#include <string>

class Employee {
public:
    Employee(std::string_view name)
    : Employee{name, 0}
    {}

    Employee(std::string_view name, int id)
    : m_name{name}
    , m_id{id} 
    {
        std::cout << "Employee " << m_name << '\n'; 
    }
private:
    std::string m_name{};
    int m_id{};
};

int main(){
    Employee emp{"Bruno"};


    return 0;
}