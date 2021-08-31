#include <iostream>
#include <map>
#include <set>
#include <vector>


using namespace std;

map<set<string>, int> buses;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int count; cin >> count;
        vector<string> stops(count);
        for (auto& stop : stops)
            cin >> stop;
        set<string> stops_set;
        stops_set.insert(begin(stops), end(stops));
        if (buses.count(stops_set) == 0) {
            buses[stops_set] = buses.size() + 1;
            cout << "New bus " << buses.size() << endl;
        } else
            cout << "Already exists for " << buses[stops_set] << endl;
        }
    return 0;
}
