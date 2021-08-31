#include <iostream>
#include <set>

using namespace std;
int main() {
    set<string> check;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        check.insert(s);
    }
    cout << check.size();
    return 0;
}
