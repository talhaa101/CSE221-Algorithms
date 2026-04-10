#include <bits/stdc++.h>
using namespace std;

int main(){

    int board_size;
    cin >> board_size;

    int x, y;
    cin >> x >> y;

    // 8 directions
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};

    vector<pair<int,int>> total_moves;

    for(int i = 0; i < 8; i++){
        int position_x = x + dx[i];
        int position_y = y + dy[i];


        if(position_x >= 1 && position_x <= board_size && position_y >= 1 && position_y <= board_size){
            total_moves.push_back({position_x, position_y});
        }
    }

    sort(total_moves.begin(), total_moves.end());


    cout << total_moves.size() << '\n';

    for(int i = 0; i < total_moves.size(); i++){
        cout << total_moves[i].first << " " << total_moves[i].second << '\n';
    }

    return 0;
}