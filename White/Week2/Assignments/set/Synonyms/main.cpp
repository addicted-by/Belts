#include <iostream>
#include <set>
#include <map>

using namespace std;

map<string, set<string>> synonyms;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string operation; cin >> operation;
        if (operation == "ADD") {
            string first, second; cin >> first >> second;
            synonyms[first].insert(second);
            synonyms[second].insert(first);

        } else if (operation == "COUNT") {
            string word;
            cin >> word;
            cout << synonyms[word].size() << endl;

        } else if (operation == "CHECK") {
            string first, second; cin >> first >> second;
            if (synonyms[second].count(first) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
    }
    return 0;
}
