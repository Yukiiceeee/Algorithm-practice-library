#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 510;

// Dijkstra的思想是，每次选定一个到起点距离最小的节点，它的距离一定不会变得更大；
// 因此初始化所有节点dis为∞，每次循环，都首先找到一个当前到起点距离最小的节点，它的距离已经确定，加入到确定集合里
// 接下来，根据这个已经确定的节点dis更新其它节点的dis，假如与这个节点邻接的节点dis被这个确定的dis更新后距离减小了，那么就可以更新
// 最后遍历所有节点更新，就确定了每个节点到起点的最短距离，时间复杂度O(n^2)

int n, m;
int g[N][N];
int dis[N];
bool st[N];

int dijkstra(){
    dis[1] = 0;
    for(int i = 0;i < n;i++){
        int t = -1;
        for(int j = 1;j <= n;j++)
            if(!st[j] && (dis[t] > dis[j] || t == -1))
                t = j;
        
        st[t] = true;

        for(int j = 1;j <= n;j++){
            dis[j] = min(dis[j], g[t][j] + dis[t]);
        }
    }
    if(dis[n] == 0x3f3f3f3f) return -1;
    else return dis[n];
}

void solve(){
    cin >> n >> m;
    memset(g, 0x3f, sizeof g);
    memset(dis, 0x3f, sizeof dis);
    for(int i = 1;i <= m;i++){
        int x, y, z;
        cin >> x >> y >> z;
        g[x][y] = min(g[x][y], z);
    }

    cout << dijkstra() << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



