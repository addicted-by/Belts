#include <iostream>
#include <map>
#include <stdio.h>
#include <vector>

using namespace std;

map<vector<string>, int> buses;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int count; cin >> count;
        vector<string> stops(count);
        for (auto& stop : stops) {
            cin >> stop;
        }
        if (buses.count(stops) == 0) {
            buses[stops] = buses.size() + 1;
            cout << "New bus " << buses.size() << endl;
        } else
            cout << "Already exists for " << buses[stops] << endl;
    }

    return 0;
}
