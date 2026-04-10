#include <bits/stdc++.h>
using namespace std;

int main(){

    int nodes, M;
    cin >> nodes >> M;

    vector<int> u(M), v(M);

    for(int i = 0; i < M; i++) {
        cin >> u[i];}
    for(int i = 0; i < M; i++) {
        cin >> v[i];}

    vector<int> indegree(nodes+1, 0);
    vector<int> outdegree(nodes+1, 0);

    for(int i = 0; i < M; i++){
        outdegree[u[i]]++;
        indegree[v[i]]++;
    }

    for(int i = 1; i <= nodes; i++){
        cout << indegree[i] - outdegree[i] << " ";
    }

    return 0;
}