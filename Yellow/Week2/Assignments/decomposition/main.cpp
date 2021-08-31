#include <iostream>
#include <exception>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <string>

/*using namespace std;

class TestRunner {
public:
    template<typename TestFunc>
    void RunTest(TestFunc func, const string& name) {
        try {
            func();
            cerr << name << " OK" << endl;
        } catch (runtime_error& ex) {
            cerr << name << " fail:" << ex.what() << endl;
            ++fall_count;
        }
    }
    ~TestRunner() {
        if (fall_count) {
            cerr << fall_count << " tests failed. Terminate";
            exit(1);
        }
    }
private:
    size_t fall_count = 0;
};

template<typename value>
ostream& operator<< (ostream& os, const set<value>& s) {
    os << "{";
    bool first = true;
    for (const auto& x : s) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << x;
    }
    return os << "}";
}

template <typename key, typename value>
ostream& operator<< (ostream& os, const map<key, value>& m) {
    os << "{";
    bool first = true;
    for (const auto& [k, v] : m) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << k << ": " << v;
    }
    return os << "}";
}

template<typename T, typename U>
void AssertEqual(const T& t, const U& u, const string& hint) {
    if (t != u) {
        ostringstream os;
        os << "Assertion failed: " << t << " != " << u << endl << "Hint: " << hint;
        throw runtime_error(os.str());
    }
}

void Assert(bool b, const string& hint = "") {
    AssertEqual(b, true, hint);
}

#pragma region LecturePart134
void ADD(map<string, set<string>>& synonyms, const string& first_word,
         const string& second_word) {
    synonyms[first_word].insert(second_word);
    synonyms[second_word].insert(first_word);
}

void TestADD() {
    {
        map<string, set<string>> m;
        ADD(m, "Hello", "HI");
        const map<string, set<string>> expected = {
                {"Hello", {"HI"}},
                {"HI", {"Hello"}}
        };
        AssertEqual(m, expected, "Add to empty");
    }
    {
        map<string, set<string>> m = {
                {"a", {"b"}},
                {"b", {"a", "c"}},
                {"c", {"b"}}
        };
        ADD(m, "a", "c");
        const map<string, set<string>> expected = {
                {"a", {"b", "c"}},
                {"b", {"a", "c"}},
                {"c", {"a","b"}}
        };
        AssertEqual(m, expected, "Add to non-empty");
    }
}

size_t Count(map<string, set<string>>& synonyms, const string& word) {
    return synonyms[word].size();
}

bool Check(map<string, set<string>>& synonyms, const string& first_word,
           const string& second_word) {
    return synonyms[first_word].count(second_word) == 1;
}

void TestCount() {
    {
        map<string, set<string>> m;
        AssertEqual(Count(m, "a"),0,"Count for empty");
    }
    {
        map<string, set<string>> m = {
                {"a", {"b", "c"}},
                {"b", {"a", "c"}},
                {"c", {"a","b"}}
        };
        AssertEqual(Count(m, "a"), 2,"Count for a");
        AssertEqual(Count(m, "b"), 2, "Count for b");
        AssertEqual(Count(m, "z"), 0, "Count for z");
    }
}
void TestCheck() {
    {
        map<string, set<string>> m;
        Assert(!Check(m, "a", "b"), "empty a b");
    }
    {
        map<string, set<string>> m = {
                {"a", {"b"}},
                {"b", {"a", "c"}},
                {"c", {"b"}}
        };
        Assert(Check(m, "a", "b"), "");
        Assert(Check(m, "b", "a"), "");
        Assert(!Check(m, "a", "c"));
        Assert(Check(m, "b", "c"));
        Assert(!Check(m, "c", "a"));
    }
}

void TestAll() {
    TestRunner tr;
    tr.RunTest(TestADD, "ADD");
    tr.RunTest(TestCheck, "Check");
    tr.RunTest(TestCount, "Count");
}



int main() {
    TestAll();
    int q; cin >> q;
    map<string, set<string>> synonyms;
    for (int i = 0; i < q; ++i) {
        string command; cin >> command;
        if (command == "ADD") {
            string first_word, second_word;
            cin >> first_word >> second_word;
            ADD(synonyms, first_word, second_word);
        } else if (command == "COUNT") {
            string word; cin >> word;
            cout << Count(synonyms, word) << endl;
        } else if (command == "CHECK") {
            string first_word, second_word;
            cin >> first_word >> second_word;
            if (Check(synonyms, first_word, second_word)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}*/
#pragma endregion
#pragma region LecturePart2
/*int Sum(int x, int y) { return x + y;}

void TestSum() {
    assert(Sum(-1,-1) == -2);
    assert(Sum(1,2) == 3);
    assert(Sum(0,-2) == -2);
    assert(Sum(-2,2) == 0);
    cout << "TestSum OK" << endl;
}
int main() {
    TestSum();
    return 0;
}
*/

#pragma endregion
using namespace std;
#pragma region TASK
enum class QueryType {
    NewBus, BusesForStop,
    StopsForBus, AllBuses
};

struct Query {
    QueryType type;
    string bus;
    string stop;
    vector<string> stops;
};

istream& operator>> (istream& is, Query& q) {

    size_t stop_count;
    string command, bus, stop;
    is >> command;
    if (command == "NEW_BUS") {
        is >> bus >> stop_count;
        vector<string> stops(stop_count);
        for (string &stop_name : stops) {
            is >> stop_name;
        }
        q.type = QueryType::NewBus;
        q.bus = bus;
        q.stops = stops;
    } else if (command == "BUSES_FOR_STOP") {
        is >> stop;
        q.type = QueryType::BusesForStop;
        q.stop = stop;
    } else if (command == "STOPS_FOR_BUS") {
        is >> bus;
        q.type = QueryType::StopsForBus;
        q.bus = bus;
    } else if (command == "ALL_BUSES") {
        q.type = QueryType::AllBuses;
    }
    return is;
}

struct BusesForStopResponse {
    string stop;
    vector<string> buses;
};

ostream& operator<< (ostream& os, const BusesForStopResponse& r) {
    if (r.buses.empty()) {
        os << "No stop";
    } else {
        for (const string &bus : r.buses) {
            os << bus << " ";
        }
    }
    return os;
}

struct StopsForBusResponse {
    string bus;
    vector<string> stops;
    map<string, BusesForStopResponse> buses_for_stop;
};

ostream& operator<< (ostream& os, const StopsForBusResponse& r) {
    bool flag_end = true, flag_space = true;
    if (r.stops.empty()) {
        os << "No bus";
    } else {
        for (const string &stop : r.stops) {
            flag_space = true;
            if (!flag_end) {
                os << endl;
            }
            flag_end = false;
            os << "Stop " << stop << ": ";
            if (r.buses_for_stop.at(stop).buses.size() == 1) {
                os << "no interchange";
            } else {
                for (const string &bus : r.buses_for_stop.at(stop).buses) {
                    if (!flag_space) {
                        os << " ";
                    }
                    flag_space = false;
                    if (r.bus != bus) {
                        os << bus;
                    }
                }
            }
        }
    }
    return os;
}

struct AllBusesResponse {
    map<string, vector<string>> buses;
};

ostream& operator<< (ostream& os, const AllBusesResponse& r) {
    bool flag_end = true, flag_space = true;
    if (r.buses.empty()) {
        os << "No buses";
    } else {
        for (const auto &bus_item : r.buses) {
            flag_space = true;
            if (!flag_end) {
                os << endl;
            }
            flag_end = false;
            os << "Bus " << bus_item.first << ": ";
            for (const string &stop : bus_item.second) {
                if (!flag_space) {
                    os << " ";
                }
                flag_space = false;
                os << stop;
            }
        }
    }
    return os;
}

class BusManager {
public:
    void AddBus(const string& bus, const vector<string>& stops) {
        buses_to_stops[bus] = stops;
        for (const auto& i : stops)
            stops_to_buses[i].push_back(bus);

    }
    BusesForStopResponse GetBusesForStop(const string& stop) const {
        if (stops_to_buses.count(stop) == 0) {
            return BusesForStopResponse {stop, vector<string>()};
        } else {
            return BusesForStopResponse {stop, stops_to_buses.at(stop)};
        }
    }
    StopsForBusResponse GetStopsForBus(const string& bus) const {
        vector<string> stops;
        if (buses_to_stops.count(bus) > 0) {
            stops = buses_to_stops.at(bus);
        } else {
            stops = {};
        }
        map<string, BusesForStopResponse> buses;
        for (const string& stop : stops) {
            buses[stop] = GetBusesForStop(stop);
        }
        return StopsForBusResponse {bus, stops, buses};
    }
    AllBusesResponse GetAllBuses() const {
        map<string, vector<string>> buses;
        if (!buses_to_stops.empty()) {
            buses = buses_to_stops;
        } else {
            buses = {};
        }
        return AllBusesResponse {buses};
    }
private:
    map<string, vector<string>> buses_to_stops;
    map<string, vector<string>> stops_to_buses;
};

int main() {
    int query_count;
    Query q;

    cin >> query_count;

    BusManager bm;
    for (int i = 0; i < query_count; ++i) {
        cin >> q;
        switch (q.type) {
            case QueryType::NewBus:
                bm.AddBus(q.bus, q.stops);
                break;
            case QueryType::BusesForStop:
                cout << bm.GetBusesForStop(q.stop) << endl;
                break;
            case QueryType::StopsForBus:
                cout << bm.GetStopsForBus(q.bus) << endl;
                break;
            case QueryType::AllBuses:
                cout << bm.GetAllBuses() << endl;
                break;
        }
    }

    return 0;
}
#pragma endregion