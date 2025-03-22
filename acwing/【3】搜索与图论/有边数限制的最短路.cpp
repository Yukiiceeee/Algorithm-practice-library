#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;
// 存在负边，存在负环，限制边数为k，使用floyd

const int N = 510, M = 10010;
int n, m, k;
vector<vector<pp>> g(N);
int dis[N];
int temp[N];

// struct edge
// {
//     int a, b, w;
// }edge[M];

void ford(){
    dis[1] = 0;
    for(int i = 1;i <= k;i++){
        // 备份dis数组，每次迭代的时候，只用上一次迭代结束后更新的dis，而不是迭代过程中的dis
        memcpy(temp, dis, sizeof dis);
        for(int j = 1;j <= n;j++){
            for(pp t : g[j]){
                int y = t.first;
                int w = t.second;
                dis[y] = min(dis[y], temp[j] + w);
            }
        }
    }

    if(dis[n] > 0x3f3f3f3f / 2) cout << "impossible";
    else cout << dis[n];
}

void solve(){
    cin >> n >> m >> k;
    memset(dis, 0x3f, sizeof dis);
    for(int i = 1;i <= m;i++){
        int x, y, z;
        cin >> x >> y >> z;
        g[x].push_back({y, z});
    }
    ford();
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



