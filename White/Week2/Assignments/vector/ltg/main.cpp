#include <iostream>
using namespace std;
void UpdateIfGreater(int first, int& second){
    if (first > second)
        second = first;
}
int main() {
    int x = 5, y = 2;
    UpdateIfGreater(5,y);
    cout << y;
    return 0;
}
