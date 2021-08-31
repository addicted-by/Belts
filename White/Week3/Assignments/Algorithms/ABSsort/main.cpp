#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v)
        cin >> x;
    sort(begin(v), end(v), [](int l, int r) {
        return abs(l) < abs(r);
    });
    for (const auto& i : v)
        cout << i << " ";

    return 0;
}
