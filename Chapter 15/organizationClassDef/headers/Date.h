#ifndef DATE_H
#define DATE_H

class Date{
public:
    void print() const;

    //Bc acessors members are too small we can define it here
    int getDay() { return m_day; }
    int getMonth() { return m_month; }
    int getYear() { return m_year; }

private:
    int m_day{24};
    int m_month{12};
    int m_year{2023};
};

#endif