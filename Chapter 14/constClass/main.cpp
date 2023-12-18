#include <iostream>

struct Date{
    int day{};
    int month{};
    int year{};
    void print() const { //This indicates member const (will not change anything in the members values)
        std::cout << day << '/' << month << '/' << year << '\n';
    }
};

int main() {
    const Date date{18,12,2023};
    Date date2{19,12,2023};
    date.print();

    date2.print();
}