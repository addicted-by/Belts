#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& x) {
    vector<int> tmp;
    for (size_t i = x.size(); i > 0; --i)
        tmp.push_back(x[i - 1]);
    x.clear();
    x = tmp;
}

int main() {
    vector<int> numbers = {1, 5, 3, 4};
    Reverse(numbers);
    for (auto x : numbers)
        cout << x << " ";
    return 0;
}
