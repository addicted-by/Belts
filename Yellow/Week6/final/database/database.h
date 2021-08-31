#pragma once
#include <vector>
#include "date.h"
#include <iostream>
#include <map>
#include <functional>
struct Database {
    void Add(const Date& date, const std::string& event);
    void Print(std::ostream& os) const;

    using Predicate = std::function<bool(const Date&, const std::string&)>;
    int RemoveIf(Predicate predicate);
    std::map<Date, std::vector<std::string>> FindIf(Predicate predicate) const;
    std::map<Date, std::string> Last(const Date& date) const;



private:
    std::map<Date, std::vector<std::string>> database;
};
