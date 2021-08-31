#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
#include <numeric>
#include <chrono>
class Date {
public:

    time_t AsTimestamp() const {
        tm t;
        t.tm_sec  = 0;
        t.tm_min  = 0;
        t.tm_hour = 0;
        t.tm_mday = day_;
        t.tm_mon  = month_ - 1;
        t.tm_year = year_ - 1900;
        t.tm_isdst = 0;
        return mktime(&t);
    }
    Date(int year, int month, int day)
            : year_(year), month_(month), day_(day) {}

private:
    int year_;
    int month_;
    int day_;


};

int ComputeDaysDiff(const Date& date_to, const Date& date_from) {
    const time_t timestamp_to = date_to.AsTimestamp();
    const time_t timestamp_from = date_from.AsTimestamp();
    static constexpr int SECONDS_IN_DAY = 60 * 60 * 24;
    return (timestamp_to - timestamp_from) / SECONDS_IN_DAY;
}
Date ParseDate(const std::string& date) {
    std::stringstream date_stream(date);
    int year;
    int month;
    int day;
    date_stream >> year;
    date_stream.ignore();
    date_stream >> month;
    date_stream.ignore();
    date_stream >> day;
    return Date(year, month, day);
}
static const Date START_DATE = ParseDate("2000-01-01");
static const Date END_DATE = ParseDate("2100-01-01");
static const size_t DAY_COUNT = ComputeDaysDiff(END_DATE, START_DATE);

/*
int main() {
    std::cout.precision(25);
    std::vector<double> money(DAY_COUNT, .0);
    size_t num_queries;
    std::cin >> num_queries;

    for (size_t i = 0; i < num_queries; ++i) {
        std::string command, date_from, date_to;
        std::cin >> command >> date_from >> date_to;
        Date from = ParseDate(date_from);
        Date to = ParseDate(date_to);
        auto start_indx = ComputeDaysDiff(from, START_DATE);
        auto finish_indx = ComputeDaysDiff(to, START_DATE);
        if (command == "Earn") {
            double value;
            std::cin >> value;
            value /= ComputeDaysDiff(to, from) + 1;
            for (int j = start_indx; j <= finish_indx; ++j) {
                money[j] += value;
            }
        } else {
            std::cout << accumulate(money.begin() + start_indx, money.begin() + finish_indx + 1, 0.) << '\n';
        }
    }

    return 0;
}
*/

#pragma region Plus
int main() {
    std::vector<uint64_t> money(DAY_COUNT, 0);
    std::vector<uint64_t> partial_sums(DAY_COUNT, 0);
    size_t num_earnings;
    std::cin >> num_earnings;

    for (size_t i = 0; i < num_earnings; ++i) {
        uint64_t earning;
        std::string date;
        std::cin >> date >> earning;
        Date earn_date = ParseDate(date);
        auto indx = ComputeDaysDiff(earn_date, START_DATE);
        money[indx] = earning;
    }
    partial_sum(money.begin(), money.end(), partial_sums.begin());

    size_t num_queries;
    std::cin >> num_queries;

    for (size_t i = 0; i < num_queries; ++i) {
        std::string date_from, date_to;
        std::cin >> date_from >> date_to;
        Date from = ParseDate(date_from);
        Date to = ParseDate(date_to);
        auto start_indx = ComputeDaysDiff(from, START_DATE);
        auto finish_indx = ComputeDaysDiff(to, START_DATE);
        if (start_indx > 0) {
            std::cout << partial_sums[finish_indx] - partial_sums[start_indx - 1] << '\n';
        } else {
            std::cout << partial_sums[finish_indx] << '\n';
        }
    }

    return 0;
}
#pragma endregion