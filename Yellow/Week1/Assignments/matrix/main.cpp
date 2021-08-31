#include <iostream>
#include <exception>
#include <vector>
#include <fstream>

using namespace std;

class Matrix {
public:
    Matrix() {
        rows = 0;
        columns = 0;
       // data.assign(0, vector<int>(0));
    }
    Matrix(int r, int c) {
        Reset(r,c);
    }
    void Reset(int r, int c) {
        if (r < 0 || c < 0)
            throw out_of_range("");
        if (r == 0 || c == 0) {
            r = c = 0;
        }
        rows = r;
        columns = c;
        data.assign(rows, vector<int>(columns));
    }

    int At(const int& r, const int& c) const {
        return data.at(r).at(c);
    }

    int& At(const int& r, const int& c) {
        return data.at(r).at(c);
    }

    int GetNumRows() const {
        return rows;
    }

    int GetNumColumns() const {
        return columns;
    }
    Matrix operator+ (const Matrix& rhs) const {
        if (this->GetNumColumns() != rhs.GetNumColumns() || this->GetNumRows() != rhs.GetNumRows())
            throw invalid_argument("");
        Matrix result = Matrix(this->GetNumRows(), this->GetNumColumns());
        for (int i = 0; i < result.GetNumRows(); ++i) {
            for (int j = 0; j < result.GetNumColumns(); ++j) {
                result.At(i,j) = this->At(i,j) + rhs.At(i,j);
            }
        }
        return result;
    }

    bool operator== (const Matrix& rhs) const {
        if (this->rows != rhs.GetNumRows() || this->columns != rhs.GetNumColumns())
            return false;
        for (int i = 0; i < this->rows; ++i) {
            for (int j = 0; j < this->columns; ++j) {
                if (this->At(i, j) != rhs.At(i, j)) {
                    return false;
                }
            }
        }
        return true;
    }

private:
    int rows;
    int columns;
    vector<vector<int>> data;
};

istream& operator>> (istream& stream, Matrix& matrix) {
    int r, c;
    stream >> r >> c;
    matrix = Matrix(r,c);

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            stream >> matrix.At(i,j);
        }
    }
    return stream;
}

ostream& operator<< (ostream& stream, Matrix matrix) {
    stream << matrix.GetNumRows() << " " << matrix.GetNumColumns() << endl;
    for (int i = 0; i < matrix.GetNumRows(); ++i) {
        for (int j = 0; j < matrix.GetNumColumns(); ++j) {
            if (j < matrix.GetNumColumns())
                stream << matrix.At(i,j) << " ";
            else
                stream << matrix.At(i,j);
        }
        stream << endl;
    }
    return stream;
}

int main() {
    ifstream  input("1.txt");
    Matrix one;
    Matrix two;
    input >> one >> two;
    cout << "First Matrix\n" << one << endl;
    //cin >> two;
    cout << "Second Matrix\n" << two << endl;
    cout << "Sum\n" << one + two << endl;
    try {
        one.At(-1,9);
    } catch (out_of_range& ex) {
        cout << ex.what() << endl;
    }
    return 0;
}
