#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int total_input;
    cin >> total_input;

    while (total_input > 0) {
        string str;
        char ch;
        int num1, num2;

        cin >> str >> num1 >> ch >> num2;

        double result;

        if (ch == '+') {
            result = num1 + num2;
        } 
        else if (ch == '-') {
            result = num1 - num2;
        } 
        else if (ch == '*') {
            result = num1 * num2;
        } 
        else if (ch == '/') {
            result = (double) num1 / num2;
        }
        cout << fixed << setprecision(6) << result << endl;

        total_input--;
    }

    return 0;
}
