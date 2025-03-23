#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 210;
// 求多源最短路
// 用邻接矩阵来存储图结构

int n, m, k;
int g[N][N];
int dis[N];

void floyd(){
    for(int k = 1;k <= n;k++){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= n;j++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }
}

void solve(){
    cin >> n >> m >> k;
    memset(dis, 0x3f, sizeof dis);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(i == j) g[i][j] = 0;
            else g[i][j] = 0x3f3f3f3f;
        }
    }
    for(int i = 1;i <= m;i++){
        int x, y, z;
        cin >> x >> y >> z;
        g[x][y] = min(g[x][y], z);
    }
    floyd();
    for(int i = 1;i <= k;i++){
        int x, y;
        cin >> x >> y;
        if(g[x][y] > 0x3f3f3f3f / 2) cout << "impossible" << endl;
        else cout << g[x][y] << endl;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



