#include <iostream>
using namespace std;

bool IsPalindrom(string str){
    for (size_t i = 0; i < str.size(); i++)
        if (str[i] != str[str.size() - i - 1])
            return false;
    return true;
}
int main() {
    string str;
    cin >> str;
    cout << IsPalindrom(str);
    return 0;
}
