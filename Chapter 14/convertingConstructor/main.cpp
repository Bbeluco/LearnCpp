#include <iostream>
#include <string>

/*
    Converting constructor means the code will do ONLY 1 conversion to access the required constructor
    If the code needs more than 1 conversion to access the constructor the code won't compile
*/

class Employee {
public:

    /*
    Explicit keyword ensures that constructor will not perform any converting
    ONLY THE EXACT SAME TYPE REQUIRED BY THE CONSTRUCTOR IS NOW AVAILABLE  
    */
    explicit Employee(std::string_view& name)
    : m_name{name}
    {}
    std::string_view getName() { return m_name; }

private:
    std::string m_name{};
};

void print(Employee e) {
    std::cout << "Name: " << e.getName() << '\n';
}

int main(){
    std::string_view t{"Bruno"};
    print(Employee {t});
    return 0;
}