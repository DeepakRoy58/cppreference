#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    vector<vector<int>> mat(rows, vector<int>(cols, 0));

    int val = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = val++;

    // Print matrix
    for (auto &row : mat) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
}