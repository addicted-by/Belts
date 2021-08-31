#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    if (input.is_open()) {
        while (getline(input, line)) {
            output << line << endl;
        }
        cout << "Done!" << endl;
    } else
        cout << "File can't be opened";
    return 0;
}
