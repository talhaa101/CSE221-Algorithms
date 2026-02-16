#include <bits/stdc++.h>
using namespace std;

int main() {

    int test;
    cin >> test;

    while (test--) {

        int total;
        cin >> total;

        vector<int> id(total);
        vector<int> mark(total);

        for (int i = 0; i < total; i++) {
            cin >> id[i];
        }

        for (int i = 0; i < total; i++) {
            cin >> mark[i];
        }


        vector<pair<int,int>> students(total);

        for (int i = 0; i < total; i++) {
            students[i] = {mark[i], id[i]};
        }

       
        vector<pair<int,int>> sorted_students = students;

      
        sort(sorted_students.begin(), sorted_students.end(),
            [](pair<int,int> a, pair<int,int> b) {

                if (a.first != b.first) {
                    return a.first > b.first;  
                }
                else {
                    return a.second < b.second; 
                }
            }
        );

        int swap_count = 0;

        unordered_map<int,int> pos;

        for (int i = 0; i < total; i++) {
            pos[students[i].second] = i;
        }

        for (int i = 0; i < total; i++) {

      
            if (students[i] == sorted_students[i]) {
                continue;
            }

          
            pair<int,int> correct = sorted_students[i];

       
            int right_index = pos[correct.second];

     
            swap(students[i], students[right_index]);

            swap_count++;

      
            pos[students[right_index].second] = right_index;
            pos[students[i].second] = i;
        }

        cout << "Minimum swaps: " << swap_count << endl;

        for (int i = 0; i < total; i++) {
            cout << "ID: " << sorted_students[i].second
                 << " Mark: " << sorted_students[i].first
                 << endl;
        }
    }

    return 0;
}
