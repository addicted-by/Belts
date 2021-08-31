#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<int> MONTH_LENGTHS =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int count;
    cin >> count;
    int month = 0;

    vector<vector<string>> days_deals(MONTH_LENGTHS[month]);

    for (int i = 0; i < count; ++i) {
        string operation;
        cin >> operation;

        if (operation == "ADD") {

            int day;
            string concern;
            cin >> day >> concern;
            --day;  // элементы вектора нумеруются с нуля
            days_deals[day].push_back(concern);

        } else if (operation == "NEXT") {

            const int old = MONTH_LENGTHS[month];
            month = (month + 1) % 12;
            const int new_l = MONTH_LENGTHS[month];
            if (new_l < old) {
                vector<string>& last_day_concerns = days_deals[new_l - 1];
                for (int day = new_l; day < old; ++day) {
                    last_day_concerns.insert(
                            end(last_day_concerns),
                            begin(days_deals[day]), end(days_deals[day]));
                }
            }
            days_deals.resize(new_l);

        } else if (operation == "DUMP") {
            int day;
            cin >> day;
            --day;
            cout << days_deals[day].size() << " ";
            for (const string& concern : days_deals[day]) {
                cout << concern << " ";
            }
            cout << endl;
        }
    }
    return 0;
}