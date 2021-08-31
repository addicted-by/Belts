#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    string surname;

    int bday;
    int bmonth;
    int byear;
};

int main() {
    int n;
    cin >> n;

    string name, surname;
    int day, month, year;
    vector<Student> students;

    for (size_t i = 0; i < n; ++i) {
        cin >> name >> surname >> day >> month >> year;

        students.push_back(Student{
                name, surname, day, month, year});
    }

    int m;
    cin >> m;
    string command;
    int k;

    for (int i = 0; i < m; ++i) {
        cin >> command >> k;
        --k;

        if (command == "name" && k >= 0 && k < n) {
            cout << students[k].name << " "
                 << students[k].surname << endl;
        } else if (command == "date" && k >= 0 && k < n) {
            cout << students[k].bday << "."
                 << students[k].bmonth << "."
                 << students[k].byear << endl;
        } else {
            cout << "bad request" << endl;
        }
    }

    return 0;
}

