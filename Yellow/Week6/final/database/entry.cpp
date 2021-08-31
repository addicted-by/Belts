#include "entry.h"

Entry::Entry(const Date& date, const std::string& event): date(date), event(event) {}

Date Entry::get_date() const {
    return date;
}

std::string Entry::get_event() const {
    return event;
}

Entry::Entry() {}

bool operator<(const Entry& lhs, const Entry& rhs) {
    return (lhs.get_date() < rhs.get_date());
}
bool operator==(const Entry& lhs, const Entry& rhs) {
    return (lhs.get_date() == rhs.get_date() && lhs.get_event() == rhs.get_event());
}

std::ostream& operator<<(std::ostream& os, const Entry& entry) {
    os << entry.get_date() << " " << entry.get_event();
    return os;
}