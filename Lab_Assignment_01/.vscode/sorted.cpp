#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test > 0) {

        int size;
        cin >> size;

        int arr[10000];

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
            int j = 0;
        for ( j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                cout << "YES\n";
                break;
            }
        }

        if (j == size - 1 ){
            cout << "NO\n";
        }

        test--;
    }

    return 0;
}
