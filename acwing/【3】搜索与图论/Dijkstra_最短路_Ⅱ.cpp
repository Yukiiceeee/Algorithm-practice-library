#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 150010;

// 分析Dijkstra算法，最耗费时间的操作在查找所有点到起点距离最小的那个点的操作上
// 这个操作可以用小根堆优化，每次从堆顶直接拿到距离最小的那个点即可
// 更新dis时，也就相当于修改堆中的值，每次修改都需要logn
// 因此用一个小根堆数据结构（也就是STL库里的优先队列）来存dis

int n, m;
vector<vector<pp>> g(N);
int dis[N];
bool st[N];

int dijkstra(){
    dis[1] = 0;
    priority_queue<pp, vector<pp>, greater<pp>> q;
    q.push({0, 1});

    while(!q.empty()){
        auto t = q.top();
        q.pop();
        int d = t.first;
        int u = t.second;
        if(st[u]) continue;
        st[u] = true;

        for(pp v : g[u]){
            if(dis[v.second] > dis[u] + v.first){
                dis[v.second] = dis[u] + v.first;
                q.push({dis[v.second], v.second});
            }
        }
    }

    if (dis[n] == 0x3f3f3f3f) return -1;
    return dis[n];
}

void solve(){
    cin >> n >> m;
    memset(dis, 0x3f, sizeof dis);
    for(int i = 1;i <= m;i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a != b)
            g[a].push_back({c, b});
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



