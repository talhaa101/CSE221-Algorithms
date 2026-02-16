#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> operations;

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j + 2 < n; j += 2) {
            if (A[j] > A[j + 2]) {
                int temp = A[j];
                A[j] = A[j + 2];
                A[j + 2] = temp;
                operations.push_back({j + 1, j + 3});
            }
        }
    }


    for (int i = 1; i < n; i += 2) {
        for (int j = 1; j + 2 < n; j += 2) {
            if (A[j] > A[j + 2]) {
                int temp = A[j];
                A[j] = A[j + 2];
                A[j + 2] = temp;
                operations.push_back({j + 1, j + 3});
            }
        }
    }

    int sorted_flag = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            sorted_flag = 0;
            break;
        }
    }


    if (sorted_flag == 1) {
        cout << "YES" << "\n";
        cout << operations.size() << "\n";
        for (int i = 0; i < operations.size(); i++) {
            cout << operations[i].first << " " << operations[i].second << "\n";
        }
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}