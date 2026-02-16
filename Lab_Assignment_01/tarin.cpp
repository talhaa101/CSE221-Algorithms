#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    vector<string> full_line(n);
    vector<string> names(n);
    vector<int> hours(n);
    vector<int> minute(n);
    vector<int> idx(n);

    for (int i = 0; i < n; i++) {

        getline(cin, full_line[i]);

        // train name cut 
        int train_name = full_line[i].find(' ');
        names[i] = full_line[i].substr(0, train_name);

        //time from the line  cut
        string time = full_line[i].substr(full_line[i].length() - 5);

        string hourStr = time.substr(0, 2);
        string minuteStr = time.substr(3, 2);

        hours[i] = stoi(hourStr);
        minute[i] = stoi(minuteStr);
        idx[i] = i; 
    }

    // using sorting function so that i can make thing easier
sort(idx.begin(), idx.end(), [&](int a, int b) {

    string s1 = names[a];
    string s2 = names[b];

    int lenA = s1.length();
    int lenB = s2.length();

    int minLen;

    if (lenA < lenB) {
        minLen = lenA;
    }
    else
     {
        minLen = lenB;
    }

   
    for (int i = 0; i < minLen; i++) {

        if (s1[i] != s2[i]) {

            int orderA;
            int orderB;

            if (s1[i] >= 'a' && s1[i] <= 'z') {
                orderA = s1[i] - 'a';
            }
            else {
                orderA = 26 + (s1[i] - 'A');
            }

            if (s2[i] >= 'a' && s2[i] <= 'z') {
                orderB = s2[i] - 'a';
            }
            else {
                orderB = 26 + (s2[i] - 'A');
            }

            if (orderA < orderB) {
                return true;
            }
            else {
                return false;
            }
        }
    }

    if (lenA != lenB) {
        if (lenA < lenB) {
            return true;
        }
        else {
            return false;
        }
    }

    if (hours[a] != hours[b]) {
        if (hours[a] > hours[b]) {
            return true;
        }
        else {
            return false;
        }
    }

    if (minute[a] != minute[b]) {
        if (minute[a] > minute[b]) {
            return true;
        }
        else {
            return false;
        }
    }

    if (a < b) {
        return true;
    }
    else {
        return false;
    }

     });

    for (int i = 0; i < n; i++) {
        cout << full_line[idx[i]] << endl;
    }

    return 0;
}
