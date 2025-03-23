#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 510, INF = 0x3f3f3f3f;

// 朴素prim算法，和dijkstra类似，核心是算法流程
// 1. 初始化距离为正无穷
// 2. n次迭代，每次迭代先找到集合外（生成树外）到集合距离最小的点，然后用这个点更新到其它点到集合的距离
// 核心是更新的是到集合的距离

int n, m;
int g[N][N];
// dis存的是每个点到生成树集合的距离
int dis[N];
bool st[N];

void prim(){
    int ans = 0;
    for(int i = 0;i < n;i++){
        int t = -1;
        for(int j = 1;j <= n;j++){
            if(!st[j] && (t == -1 || dis[j] < dis[t]))
            t = j;
        }
        if(i && dis[t] == INF){
            cout << "impossible" << endl;
            return;
        }
        if(i) ans += dis[t];

        for(int j = 1;j <= n;j++){
            dis[j] = min(dis[j], g[j][t]);
        }
        st[t] = true;
    }
    cout << ans << endl;
}

void solve(){
    cin >> n >> m;
    memset(g, 0x3f, sizeof g);
    memset(dis, 0x3f, sizeof dis);
    for(int i = 1;i <= m;i++){
        int x, y, w;
        cin >> x >> y >> w;
        g[x][y] = g[y][x] = min(g[x][y], w);
    }
    prim();
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



