#include <iostream>
using namespace std; 

int main (){
    int total_input  ;
    cin >> total_input;

    while(total_input > 0){

        long long num;
        cin >> num;

        long long sum = num * (num + 1) / 2;

        cout << sum << endl;

        total_input--;

    }
}