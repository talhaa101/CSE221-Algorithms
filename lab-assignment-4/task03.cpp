#include <bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cin >> size;
    int matrix[101][101];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[i][j] = 0;
        }
    }

    for(int i = 0; i < size; i++){
        int k;
        cin >> k;

        for(int j = 0; j < k; j++){
            int x;
            cin >> x;

            matrix[i][x] = 1;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}