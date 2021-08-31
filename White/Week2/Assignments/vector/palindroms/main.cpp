#include <iostream>
#include <vector>

using namespace std;

bool IsPalindrom(string str){
    for (size_t i = 0; i < str.size(); i++)
        if (str[i] != str[str.size() - i - 1])
            return false;
    return true;
}

void AddWorld(string& s){
    s += "W";
}
vector<string> PalindromFilter(vector<string> strings, int min){
    vector<string> palindroms;
    for (auto w : strings)
        if (IsPalindrom(w) && w.size() >= min)
            palindroms.push_back(w);

    return palindroms;

}
int main() {
    /*vector<string> strings;
    int n;
    cin >> n;
    vector<string> res = PalindromFilter(strings, n);
    for (auto w : res)
        cout << w << " ";*/
    const string h = "Hello";
    string t = h;
    t += "W";
    cout << t;
    return 0;
}
