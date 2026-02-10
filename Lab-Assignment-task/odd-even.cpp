#include <iostream>
using namespace std;

int main (){
    int input;
    cin >> input; 
    int input_counter = 0;
    int number;

    while(input_counter < input){
        cin >> number ;
        if (number % 2 == 0){
            cout << number << " is an Even number." << endl;
        }
        else{
           cout << number << " is an Odd number." << endl; 
        }
        input_counter++;
    }
}