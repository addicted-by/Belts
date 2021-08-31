#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<bool> queue;
    string s;
    int k, i = 0;
    cin >> k;
    while (i < k) {
        cin >> s;
        if (s == "WORRY") {
            int n;
            cin >> n;
            queue[n] = true;
        } else if (s == "QUIET") {
            int n;
            cin >> n;
            queue[n] = false;
        } else if (s == "COME") {
            int n;
            cin >> n;
            queue.resize(queue.size() + n, 0);
        } else if (s == "WORRY_COUNT") {
            cout << count(queue.begin(), queue.end(), true) << endl;
        }
        i++;
    }
    return 0;
}
