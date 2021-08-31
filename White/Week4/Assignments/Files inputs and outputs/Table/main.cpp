#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    ifstream input("input.txt");

    int rows = 0;
    int columns = 0;
    if (input) {
        input >> rows >> columns;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                int value;
                input >> value;
                input.ignore(1);
                cout << setw(10) << value;
                if (j == columns - 1)
                    continue;
                else
                    cout << " ";
            }
            if (i == rows - 1)
                continue;
            else
                cout << endl;
        }
    }
    return 0;
}