#include "database.h"
#include <algorithm>

void Database::Add(const Date& date, const std::string& event) {
    if (database.count(date) == 0) {
        database[date].push_back(event);
    } else {
        auto it = database.find(date);
        std::vector<std::string>& events = it->second;
        if (std::find(events.begin(), events.end(), event) == events.end()) {
            events.push_back(event);
        }
    }

}

void Database::Print(std::ostream &os) const {
    for (const auto& [date, events] : database) {
        for (const auto& event : events) {
            os << date << " " << event << std::endl;
        }
    }
}

using Predicate = std::function<bool(const Date&, const std::string&)>;
int Database::RemoveIf(Predicate predicate) {
    int N = 0;
    std::vector<Date> forclean;
    for (auto& item : database) {
        const Date& date = item.first;
        auto it = stable_partition((item.second).begin(), (item.second).end(),
                                   [date, predicate](std::string& event) {
                                       return predicate(date, event);
                                   });
        N += it - begin(item.second);
        if (N != 0) {
            (item.second).erase((item.second).begin(), it);
        }
        if (item.second.empty()) {
            forclean.push_back(date);
        }
    }
    for (auto& date : forclean) {
        database.erase(date);
    }
    return N;
}
std::map<Date, std::vector<std::string>> Database::FindIf(Predicate predicate) const {

    std::map<Date, std::vector<std::string>> answer;
    for (auto item : database) {
        const Date &date = item.first;

        auto it = stable_partition((item.second).begin(), (item.second).end(),
                                   [date, predicate](const std::string &event_) {

                                       if (predicate(date, event_)) {
                                           return true;
                                       } else
                                           return false;
                                   });

        if (it != (item.second).begin()) {
            answer[item.first] = std::vector<std::string>((item.second).begin(), it);
        }

    }
    return answer;
}

std::map<Date, std::string> Database::Last(const Date &date) const {
    if (database.empty()) {
        throw std::invalid_argument("Empty database");
    }
    std::map<Date, std::string> answer;
    auto it = database.lower_bound(date);
    if (it == database.cbegin() && date < it->first) {
        throw std::invalid_argument("No entries");
    }
    if (it->first == date || it != database.cend()) {
        answer[it->first] = it->second.back();
        return answer;
    } else {
        answer[prev(it)->first] = prev(it)->second.back();
        return answer;
    }
}