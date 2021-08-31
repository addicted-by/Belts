#include "date.h"
#include <iomanip>
Date::Date(int year, int month, int day): year(year), month(month), day(day) {}

int Date::GetYear() const {
    return year;
}

int Date::GetMonth() const {
    return month;
}

int Date::GetDay() const {
    return day;
}


Date ParseDate(std::istream& is) {
    int year, month, day;
    is >> year;
    is.ignore(1);
    is >> month;
    is.ignore(1);
    is >> day;
    return Date{year, month, day};
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << std::setfill('0') << std::setw(4) << date.GetYear() << '-';
    os << std::setfill('0') << std::setw(2) << date.GetMonth() << '-';
    os << std::setfill('0') << std::setw(2) << date.GetDay();
    return os;
}

bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() < rhs.GetDay();
        }
        return lhs.GetMonth() < rhs.GetMonth();
    }
    return lhs.GetYear() < rhs.GetYear();
}
bool operator>(const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() > rhs.GetDay();
        }
        return lhs.GetMonth() > rhs.GetMonth();
    }
    return lhs.GetYear() > rhs.GetYear();
}
bool operator<=(const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() <= rhs.GetDay();
        }
        return lhs.GetMonth() <= rhs.GetMonth();
    }
    return lhs.GetYear() <= rhs.GetYear();
}
bool operator>=(const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() >= rhs.GetDay();
        }
        return lhs.GetMonth() >= rhs.GetMonth();
    }
    return lhs.GetYear() >= rhs.GetYear();
}
bool operator==(const Date& lhs, const Date& rhs) {
    if (lhs <= rhs && rhs <= lhs)
        return true;
    else
        return false;
}