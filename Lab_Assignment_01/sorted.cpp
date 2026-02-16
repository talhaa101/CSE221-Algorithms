#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {

        int size;
        cin >> size;

        int new_array[10000];

        for (int i = 0; i < size; i++) {
            cin >> new_array[i];
        }

        int j;
        for (j = 0; j < size - 1; j++) {
            if (new_array[j] > new_array[j + 1]) {
                cout << "NO\n";
                break;
            }
        }

        if (j == size - 1) {
            cout << "YES\n";
        }
    }

    return 0;
}
