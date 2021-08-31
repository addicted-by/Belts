#include <iostream>
using namespace std;
int main() {
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    if (N > B)
        cout << N * (1 - Y / 100);
    else if (N > A)
        cout << N * (1 - X / 100);
    else
        cout << N;
    return 0;
}
