#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class SortedStrings {
public:
    void AddString(const string& s) {
        sorting.push_back(s);

        // добавить строку s в набор
    }
    vector<string> GetSortedStrings() {
        sort(begin(sorting), end(sorting));
        return sorting;
        // получить набор из всех добавленных строк в отсортированном порядке
    }
private:
    vector<string> sorting;
    // приватные поля
};
void PrintSortedStrings(SortedStrings& strings) {
    for (const string& s : strings.GetSortedStrings()) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");
    PrintSortedStrings(strings);

    strings.AddString("second");
    PrintSortedStrings(strings);

    return 0;
}