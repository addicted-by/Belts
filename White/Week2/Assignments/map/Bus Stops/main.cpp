#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, vector<string>> bus_stops;
map<string, vector<string>> stops_bus;
int main() {
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++) {
        string operation;
        cin >> operation;
        if (operation == "NEW_BUS") {
            string n;
            int count;
            cin >> n >> count;
            for (auto j = 0; j < count; j++) {
                string stop_j;
                cin >> stop_j;
                bus_stops[n].push_back(stop_j);
                stops_bus[stop_j].push_back(n);
            }
        } else if (operation == "BUSES_FOR_STOP") {

            string stop;
            cin >> stop;
            if (stops_bus.count(stop) == 0)
                cout << "No stop" << endl;
            else {
                for (const auto& x : stops_bus[stop])
                           cout << x << " ";
            }
        } else if (operation == "STOPS_FOR_BUS") {
            string n; cin >> n;
            if (bus_stops.count(n) == 0)
                cout << "No bus" << endl;
            else {
                for (const auto& stop : bus_stops[n]) {
                    cout << "Stop " << stop << ": ";

                    if (stops_bus[stop].size() == 1)
                        cout << "no interchange";
                    else {
                        for (const auto& bus : stops_bus[stop]) {
                            if (n != bus)
                                cout << bus << " ";
                        }
                    }
                    cout << endl;
                }
            }

        } else if (operation == "ALL_BUSES") {
            if (bus_stops.empty())
                cout << "No buses" << endl;
            else {
                for (const auto& item : bus_stops) {
                    cout << "Bus " << item.first << ":";
                    for (const auto& stop : bus_stops[item.first])
                        cout << " " << stop;
                    cout << endl;
                }
            }

        }
    }

    return 0;
}
