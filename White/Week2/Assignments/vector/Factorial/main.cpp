#include <iostream>
using namespace std;

int Factorial(int x){
    int res = 1;
    while (x > 1) {
        res *= x;
        x--;
    }

    return res;
}
int main() {
    int x;
    cin >> x;
    cout << Factorial(x);
    return 0;
}
