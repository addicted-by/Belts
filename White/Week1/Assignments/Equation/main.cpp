#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> get_roots(double a, double b, double c) {
    vector<double> x;
    if (a == 0) {
        if (b != 0)
            x.push_back(-c / b);
    } else {
        double D1 = b / 2 * b / 2 - a * c;
        if (D1 > 0) {
            x.push_back((-b / 2 + sqrt(D1)) / a);
            x.push_back((-b / 2 - sqrt(D1)) / a);
        } else if (D1 == 0) {
            x.push_back(-b / (2 * a));
        }
    }
    return x;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    vector<double> solution = get_roots(a,b,c);
    for (auto x : solution)
        cout << x << " ";
    return 0;
}