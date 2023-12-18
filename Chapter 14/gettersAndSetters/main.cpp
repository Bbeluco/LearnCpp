#include <iostream>

class Date{
private:
    int m_day{18};
    int m_month{12};
    int m_year{2022};

public:
    void print() const {
        std::cout << m_day << '/' << m_month << '/' << m_year << '\n';
    }

    int getDay() const {return m_day;};
    void setDay(int day) {m_day = day;};
    int getMonth() const {return m_month;};
    void setMonth(int month) {m_month = month;};
    int getYear() const {return m_year;};
    void setYear(int year) {m_year = year;};
};

int main() {
    Date date{};
    date.setDay(31);
    date.setMonth(1);
    date.setYear(2024);
    date.print();

    std::cout << "The year is: " << date.getYear() << '\n';
}