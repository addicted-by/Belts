
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> str;
    string a,b,c;
    cin >> a >> b >> c;
    str.push_back(a);
    str.push_back(b);
    str.push_back(c);
    sort(str.begin(), str.end());
    cout << str[0] << endl;

    return 0;
}
