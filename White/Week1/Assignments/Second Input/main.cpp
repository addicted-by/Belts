#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    int count = 0, i = 0, ind;
    for (auto x : str){
        if (x == 'f') {
            count++;
            if (count == 2)
                ind = i;
        }
        i++;
    }
    if (count == 0)
        cout << -2;
    else if (count == 1)
        cout << -1;
    else
        cout << ind;
    return 0;
}
