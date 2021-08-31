#include <iostream>
#include <set>
#include <map>
#include <exception>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;

#pragma region Work with date
class Date {
public:
    Date(const int& new_year, const int& new_month, const int& new_day) {
      year = new_year;
      if (new_month > 12 || new_month < 1)
          throw logic_error("Month value is invalid: " + to_string(new_month));
      month = new_month;
      if (new_day > 31 || new_day < 1)
          throw logic_error("Day value is invalid: " + to_string(new_day));
      day = new_day;
  }
  int GetYear() const {
      return year;
  }
  int GetMonth() const {
        return month;
  }
  int GetDay() const {
        return day;
  }
private:
    int day;
    int month;
    int year;
};

bool operator< (const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() < rhs.GetDay();
        }
        return lhs.GetMonth() < rhs.GetMonth();
    }
    return lhs.GetYear() < rhs.GetYear();
}

Date ParseDate(const string& date) {
    stringstream date_stream(date);
    int year;
    int month;
    int day;
    date_stream >> year;
    if (date_stream.peek() != '-')
        throw logic_error("Wrong date format: " + date);
    date_stream.ignore();
    date_stream >> month;
    if (date_stream.peek() != '-')
        throw logic_error("Wrong date format: " + date);
    date_stream.ignore();
    date_stream >> day;

    if (!date_stream.eof()) {
        throw logic_error("Wrong date format: " + date);
    }
    return Date(year, month, day);
}

ostream& operator<< (ostream& stream, const Date& date) {
    stream << setw(4) << setfill('0') << date.GetYear() << '-' <<
    setw(2) << setfill('0') << date.GetMonth() << '-' <<
                                               setw(2) << setfill('0') << date.GetDay();
    return stream;
}
#pragma endregion

#pragma region Database

class Database {
public:
   void AddEvent(const Date& date, const string& event) {
       database[date].insert(event);
   }

   bool DeleteEvent(const Date& date, const string& event) {
       if (database.count(date) > 0 && database[date].count(event) > 0) {
           database[date].erase(event);
           return true;
       }
       return false;
   }
   int DeleteDate(const Date& date) {
       if (database.count(date) == 0)
           return 0;
       else {
           const int size = database[date].size();
           database.erase(date);
           return size;
       }
   }
   set<string> Find(const Date& date) const {
       if (database.count(date) == 0)
           return {};
       else
           return database.at(date);
   }
   void Print() const {
       for (const auto& item : database) {
           for (const string& second : item.second) {
               cout << item.first << " " << second << endl;
           }
       }
   }
private:
    map<Date, set<string>> database;
};

#pragma endregion

int main() {
    try {
        Database database;
        string line;
        while (getline(cin, line)) {
            stringstream ss(line);
            string command;
            ss >> command;

            if (command == "Add") {
                string date_string, event;
                ss >> date_string >> event;
                Date date = ParseDate(date_string);
                database.AddEvent(date, event);
            } else if (command == "Del") {
                string date_string;
                ss >> date_string;
                string event;
                if (!ss.eof()) {
                    ss >> event;
                }
                Date date = ParseDate(date_string);
                if (event.empty()) {
                    cout << "Deleted " << database.DeleteDate(date) << " events" << endl;
                } else {
                    (database.DeleteEvent(date, event)) ? cout << "Deleted successfully" << endl : cout << "Event not found" << endl;
                }
            } else if (command == "Find") {
                string date_string;
                ss >> date_string;
                Date date = ParseDate(date_string);
                for (const auto &event : database.Find(date)) {
                    cout << event << endl;
                }
            } else if (command == "Print") {
                database.Print();
            } else if (command.empty())
                continue;
            else {
                throw logic_error("Unknown command: " + command);
            }
        }
    } catch (exception& exception) {
        cout << exception.what() << endl;
    }
    return 0;
}