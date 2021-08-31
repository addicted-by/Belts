#pragma once
#include <iostream>

struct Date {
    Date(int year, int month, int day);
    Date();

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
private:
    const int year;
    const int month;
    const int day;
};

Date ParseDate(std::istream& is);

std::ostream& operator<<(std::ostream& os, const Date& date);

bool operator<(const Date& lhs, const Date& rhs);
bool operator>(const Date& lhs, const Date& rhs);
bool operator<=(const Date& lhs, const Date& rhs);
bool operator>=(const Date& lhs, const Date& rhs);
bool operator==(const Date& lhs, const Date& rhs);
