#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M, K;
    cin >> N >> M >> K;

    set<pair<int,int>> position;

    // input nilam for knight position akta set a 
    for(int i = 0; i < K; i++){
        int x, y;
        cin >> x >> y;
        position.insert({x, y});
    }


    vector<pair<int,int>> v(position.begin(), position.end());

    int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

   
    for(int i = 0; i < v.size(); i++){
        int x = v[i].first;
        int y = v[i].second;

        for(int j = 0; j < 8; j++){
            int x_pos = x + dx[j];
            int y_pos = y + dy[j];
            if(position.count({x_pos, y_pos})){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}