#include <iostream>
#include <map>

using namespace std;

map<string, string> countries;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string operation;
        cin >> operation;
        if (operation == "CHANGE_CAPITAL"){
            string country, new_capital;
            cin >> country >> new_capital;
            if (countries.count(country) == 0)
                cout << "Introduce new country " << country
                << " with capital " << new_capital << endl;
            else {
                if (countries[country] == new_capital)
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                else
                    cout << "Country " << country << " has changed its capital from "
                    << countries[country] << " to " << new_capital << endl;
            }
            countries[country] = new_capital;
        } else if (operation == "RENAME") {
            string old_name, new_name;
            cin >> old_name >> new_name;
            if (old_name == new_name
                || countries.count(old_name) == 0 || countries.count(new_name) == 1)
                cout << "Incorrect rename, skip" << endl;
            else {
                cout << "Country " << old_name << " with capital " << countries[old_name] <<
                     " has been renamed to " << new_name << endl;
                countries[new_name] = countries[old_name];
                countries.erase(old_name);
            }
        } else if (operation == "ABOUT") {
            string country;
            cin >> country;
            if (countries.count(country) == 0)
                cout << "Country " << country << " doesn't exist" << endl;
            else
                cout << "Country " << country << " has capital " << countries[country] << endl;
        } else if (operation == "DUMP")
        {
            if (countries.empty())
                cout << "There are no countries in the world" << endl;
            else {
                for (const auto& [key, value] : countries)
                    cout << key << "/" << value << " ";
            }
        }
    }
    return 0;
}
