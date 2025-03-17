#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 110;

// BFS按层遍历，第一次搜到的一定是距离最小的
// DFS能保证搜到终点，但是不能保证路径是最短路径
// d数组存的是图上每个点到起点的距离
// 队列里存储的是待访问的节点列表
int n, m;
int g[N][N];
int d[N][N];
queue<pp> q;
// 手动实现队列
pp qt[N*N];

int bfs(){
    int tt = 0, hh = 0;
    memset(d, -1, sizeof d);
    d[1][1] = 0;
    q.push({1, 1});
    qt[0] = {1, 1};

    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    while(hh <= tt){
        auto t = qt[hh++];
        for(int i = 0;i < 4;i++){
            int x = t.first + dx[i], y = t.second + dy[i];
            if(x > 0 && y > 0 && x <= n && y <= m && g[x][y] == 0 && d[x][y] == -1){
                d[x][y] = d[t.first][t.second] + 1;
                qt[++tt] = {x, y};
            }
        }
    }
    // while(!q.empty()){
    //     auto t = q.front();
    //     q.pop();

    //     for(int i = 0;i < 4;i++){
    //         int x = t.first + dx[i], y = t.second + dy[i];
    //         if(x > 0 && y > 0 && x <= n && y <= m && g[x][y] == 0 && d[x][y] == -1){
    //             q.push({x, y});
    //             d[x][y] = d[t.first][t.second] + 1;
    //         }
    //     }
    // }

    return d[n][m];
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= m;j++)
            cin >> g[i][j];
    cout << bfs() << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



