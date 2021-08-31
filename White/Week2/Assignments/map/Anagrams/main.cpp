#include <iostream>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string& word) {
    map<char, int> counters;
    for (auto x : word) {
        ++counters[x];
    }
    return counters;
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string first, second;
        cin >> first >> second;
        if (BuildCharCounters(first) == BuildCharCounters(second))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
