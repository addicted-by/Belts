#pragma once

#include "date.h"
struct Entry {
    Entry() {}
    Entry(const Date& date, const std::string& event);

    Date get_date() const;
    std::string get_event() const;

private:
    const Date date;
    const std::string event;
};

bool operator<(const Entry& lhs, const Entry& rhs);
bool operator==(const Entry& lhs, const Entry& rhs);
std::ostream& operator<<(std::ostream& os, const Entry& entry);