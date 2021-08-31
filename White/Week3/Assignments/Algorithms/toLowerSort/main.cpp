#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n; cin >> n;
    vector<string> strings(n);
    for (auto& word : strings) {
        cin >> word;
    }
    sort(begin(strings), end(strings), [](const string& l, const string& r) {
       return lexicographical_compare(begin(l), end(l), begin(r), end(r), [](const auto& cl, const auto& cr) {
           return tolower(cl) < tolower(cr);
       });
    });

    for (const auto& i : strings)
        cout << i << " ";
    return 0;
}
