#include <iostream>

class Date {
    public:
        int m_day{};
        int m_month{};
        int m_year{};
};

void printDate(const Date& date) {
    std::cout << date.m_day << '/' << date.m_month << '/' << date.m_day << '\n';
}

int main() {
    constexpr Date d{18, 12, 2023};
    printDate(d);
    
}