#include <iostream>
#include <vector>
using namespace std;
void function(int row, int col, int n, int m, const vector<vector<int>>& a, const vector<vector<int>>& b) {
    if (row == n) return;
    cout << a[row][col] + b[row][col] << " ";

    if (col < m - 1)
        return function(row, col+1, n, m, a, b); 
    else {
        cout << endl; 
        return function(row+1, 0, n, m, a, b); 
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    function(0, 0, n, m, a, b);
}

