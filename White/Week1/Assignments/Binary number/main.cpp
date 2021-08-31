#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A;
    cin >> A;
    vector<int> binary;
    while (A > 0) {
        binary.push_back(A % 2);
        A /= 2;
    }
    reverse(begin(binary), end(binary));
    for (auto x:binary)
        cout << x;
    return 0;
}
