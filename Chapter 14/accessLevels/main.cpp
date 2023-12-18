#include <iostream>

class Date {
private:
    int m_day{18};
    int m_month{12};
    int m_year{2023};

public:
    void setDay(int day) {
        m_day = day;
    }

    void print() {
        std::cout << m_day << '/' << m_month << '/' << m_year << '\n';
    }
};

int main() {
    Date date{};
    date.setDay(22);
    date.print();
}