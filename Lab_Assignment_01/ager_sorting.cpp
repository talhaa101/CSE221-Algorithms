#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test;


    if (!(cin >> test)) {
        return 0;
    }
    vector<int> a(test);
    for (int i = 0; i < test; i++) {
        cin >> a[i];
    }

    int k = test;
    while (k--) {
        for (int j = 0; j < test - 1; j++) {
            

            if (a[j] % 2 == a[j + 1] % 2) {
                
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

   
    for (int i = 0; i < test; i++) {
        cout << a[i];
        if (i < test - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}