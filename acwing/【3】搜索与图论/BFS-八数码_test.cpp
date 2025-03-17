#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 10;
// 如何表示BFS过程中的每个状态？如何定义状态转移？
// BFS过程中的queue如何定义？衡量当前状态到初始状态的距离如何定义？

vector<vector<char>> g(3, vector<char>(3));

int bfs(vector<vector<char>> state){
    queue<vector<vector<char>>> q;
    map<vector<vector<char>>, int> d;
    vector<vector<char>> end = {{'1','2','3'}, {'4','5','6'}, {'7','8','x'}};
    q.push(g);
    d[g] = 0;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        int dis = d[t];
        if(t == end) return dis;

        int x = 0, y = 0;
        for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){
                if(t[i][j] == 'x'){
                    x = i, y = j;
                    break;
                }
            }
        }
        for(int i = 0;i < 4;i++){
            int a = x + dx[i], b = y + dy[i];
            if(a >= 0 && a < 3 && b >= 0 && b < 3){
                swap(t[x][y], t[a][b]);
                if(!d.count(t)){
                    d[t] = dis + 1;
                    q.push(t);
                }
                swap(t[x][y], t[a][b]);
            }
        }
    }

    return -1;
}

void solve(){
    for(int i = 0;i < 3;i++)
        for(int j = 0;j < 3;j++)
            cin >> g[i][j];
    cout << bfs(g) << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



