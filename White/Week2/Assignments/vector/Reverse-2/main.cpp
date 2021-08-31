#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& x){
    vector<int> tmp;
    for (int i = x.size(); i > 0; --i)
        tmp.push_back(x[i-1]);
    return tmp;
}
int main() {
    vector<int> v(5);
    vector<int> reversed = Reversed(v);
    for (auto x : reversed)
        cout << x << " ";
    v.assign(0, 8);
    cout << endl << v.size();
    return 0;
}
