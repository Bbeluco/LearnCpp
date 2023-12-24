#include <iostream>

/*
    "this" keyword works exactly the same as Java, in fact, this is just a POINTER to our current class instance
*/

class Employee {
public:
    int getId() const { return this->id; };
    void setId(int id) { this->id = id; };

private:
    int id{};
};

void print(const Employee& e) {
    std::cout << "Current Id is: " << e.getId() << '\n';
}

int main() {
    Employee e{};
    e.setId(2);

    print(e);
    return 0;
}