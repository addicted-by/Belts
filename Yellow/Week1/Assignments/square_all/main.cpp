#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

template <typename T> T Sqr(T x);

template <typename First, typename Second>
pair<First, Second> Sqr(const pair<First, Second>& p);

template <typename Key, typename Value>
map<Key, Value> Sqr(const map<Key, Value>& m);

template <typename T> vector<T> Sqr(const vector<T>& v);

template <typename T>
T Sqr(T x) {
    return x * x;
}

template <typename First, typename Second>
pair<First, Second> Sqr(const pair<First, Second>& p) {
    return {Sqr(p.first), Sqr(p.second)};
}
template <typename Key, typename Value>
map<Key, Value> Sqr(const map<Key, Value>& m) {
    map<Key, Value> answer;
    for (const auto& [key, value] : m)
        answer[key] = Sqr(value);
    return answer;
}

template <typename T>
vector<T> Sqr(const vector<T>& v) {
    vector<T> answer;
    for (const auto& i : v)
        answer.push_back(Sqr(i));
    return answer;
}
//comment next
template <typename First, typename Second>
ostream& operator<< (ostream& out, const pair<First, Second>& p) {
    return out << '(' << p.first << "," << p.second << ')';
}

template <typename Collection>
string Join(const Collection& c, char d) {
    stringstream ss;
    bool flag = true;
    for (const auto& i : c) {
        if (!flag) {
            ss << d;
        }
        flag = false;
        ss << i;
    }
    return ss.str();
}

template <typename T>
ostream& operator<< (ostream& out, const vector<T>& v) {
    return out  << '[' << Join(v, ',') << ']';
}


template <typename Key, typename Value>
ostream& operator<< (ostream& out, const map<Key, Value>& v) {
    return out << '{' << Join(v, ',') << '}';
}


int main() {
   // vector<map<int,int>> v = {{{1,1}, {2,2}},{{4,3}, {3,2}}};
    auto p = make_pair(2.5,3);
    cout << Sqr(p).first << endl;
    cout << Sqr(p).second << endl;
    //cout << "PrintVector:\n" << v << endl;
    map<int,int> m = {{1,2}, {3,4}};
    cout << m << endl;
    //max(string("asd"), string("asd"));
    cout << "------------------------------" << endl;
    vector<int> v = {1, 2, 3};
    cout << "vector:";
    for (int x : Sqr(v)) {
        cout << ' ' << x;
    }
    cout << endl;

    map<int, pair<int, int>> map_of_pairs = {
            {4, {2, 2}},
            {7, {4, 3}}
    };
    cout << "map of pairs:" << endl;
    for (const auto& x : Sqr(map_of_pairs)) {
        cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
    return 0;
}
