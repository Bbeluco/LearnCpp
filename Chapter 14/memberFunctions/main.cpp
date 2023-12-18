#include <iostream>

struct Date {
    int day{};
    int month{};
    int year{};

    void print() {
        std::cout << day << '/' << month << '/' << year << '\n';
    }
};

int main() {
    Date date{18,12,2023};
    date.print();
}