#include <bits/stdc++.h>
using namespace std ; 

int hey_gcd(int a , int b ){
    while (b != 0){
        int temp = b;
        b = a % b ;
        a = temp ;
    }
    return a ; 
}

int main (){


    int nodes , queries; 
    cin >> nodes >> queries;

    vector <vector<int>>adj(nodes+1);

    for (int i = 1 ; i <= nodes ; i++){
        for (int j = i+1 ; j <= nodes ; j++ ){
            if (hey_gcd( i , j ) == 1){
                adj[i].push_back(j);
                adj[j].push_back (i);
            }
        }
    }

    for (int i = 1 ; i <= nodes ; i++ ){
        sort (adj[i].begin() , adj[i].end());
    }

    while (queries -- ){
        int X , K;
        cin >> X >> K ; 

        if (adj[X].size() < K){
            cout << -1 << endl;
        }
        else {
            cout << adj[X][K-1] << endl;
        }
    }

    return 0;
}