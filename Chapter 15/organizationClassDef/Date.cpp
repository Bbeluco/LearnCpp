#include "headers/Date.h"
#include "iostream"

void Date::print() const {
    std::cout << "Day: " << m_day << '\n';
    std::cout << "Month: " << m_month << '\n';
    std::cout << "Year: " << m_year << '\n';
}