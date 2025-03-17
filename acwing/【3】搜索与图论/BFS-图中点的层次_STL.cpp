#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int n, m;
vector<vector<int>> g(N);
queue<int> q;
int d[N];

int bfs(int x){
    q.push(x);
    d[x] = 0;

    while(!q.empty()){
        auto u = q.front();
        q.pop();
        for(int v: g[u]){
            // 没有被访问过，也跳过了自环和重边的情况
            if(d[v] == -1){
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }

    return d[n];
}

void solve(){
    cin >> n >> m;
    memset(d, -1, sizeof d);
    for(int i = 0; i < m;i++){
        int a, b;
        cin >> a >> b;
        if(a != b){
            g[a].push_back(b);
        }
    }
    cout << bfs(1) << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



