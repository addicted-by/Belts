#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, p, w, h, d;
    uint64_t V, sum = 0;
    cin >> n >> p;
    for (int i = 0; i < n; ++i) {
        cin >> w >> h >> d;
        V = static_cast<uint64_t>(w) * h * d;
        sum += V * p;
    }
    cout << sum << endl;
    return 0;
}
