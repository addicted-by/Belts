#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
class Weather {
public:
    Weather(const string& new_state, int new_temperature) {
        state = new_state;
        temperature = new_temperature;
        cout << 'c';
    }
    ~Weather() {
        cout << 'd';
    }
private:
    string state;
    int temperature;
};

Weather GetMayWeather(int day) {
    if (day == 9) {
        cout << 'b';
        return {"clear", 10};
    } else {
        cout << 'b';
        return {"cloudy", 10};
    }
}

int main() {
    vector<int> days(2, 1);
    for (int day : days) {
        cout << 'a';
        Weather weather = GetMayWeather(day);
        cout << 'e';
    }
    cout << 'f';
    return 0;
}
