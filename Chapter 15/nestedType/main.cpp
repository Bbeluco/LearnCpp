#include <string>
#include <iostream>

class Company {
public:
    using IDType = int;
private:
    std::string m_name{};
    IDType m_id{};

public:
    Company(std::string_view name, IDType id)
    : m_name{name}
    , m_id{id}
    {}

    IDType getId() const { return m_id; }
    std::string_view getName() const { return m_name; }
};

int main() {
    Company::IDType employeeId{1};
    Company c{"Bruno", employeeId};

    std::cout << c.getName() << '\n';
    std::cout << c.getId() << '\n';
    return 0;
}