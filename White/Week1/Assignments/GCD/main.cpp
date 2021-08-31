#include <iostream>
using namespace std;
int main() {
    int x1, x2;
    cin >> x1 >> x2;
    while (x1 > 0 && x2 > 0) {
        if (x1 > x2)
            x1 = x1 % x2;
        else
            x2 = x2 % x1;
    }
    cout << x1 + x2;
    return 0;
}
