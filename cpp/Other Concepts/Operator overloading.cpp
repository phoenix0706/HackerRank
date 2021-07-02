
class Matrix {
public:
    vector<vector<int>> a;
    Matrix() {}

    Matrix operator+(Matrix& other) {
        for (int i = a.size() - 1; i >= 0; --i) {
            for (int j = a[0].size() - 1; j >= 0; --j) {
                a[i][j] += other.a[i][j];
            }
        }
        return *this;
    }
};
