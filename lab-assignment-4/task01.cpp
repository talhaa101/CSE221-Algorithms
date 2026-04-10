#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int matrix[101][101] = {0};

    for(int i = 0; i < col; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        matrix[u][v] = w;
    }

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}