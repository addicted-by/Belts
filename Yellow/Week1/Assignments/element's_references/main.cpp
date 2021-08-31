#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <typename Key, typename Value>
Value& GetRefStrict(map<Key,Value>& m, Key k) {
    if (m.count(k) == 0)
        throw runtime_error("");
    return m[k];
}

int main() {
    map<int, string> m = {{0, "value"}};
    string& item = GetRefStrict(m, 0);
    item = "newvalue";
    cout << m[0] << endl;
    return 0;
}
