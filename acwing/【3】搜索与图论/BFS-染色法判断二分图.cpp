#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
int n, m;
vector<vector<int>> g(N);
int color[N];
bool st[N];

bool bfs(int u, int c){
    queue<int> q;
    q.push(u);
    color[u] = c;

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        for(int v : g[t]){
            if(!color[v]){
                color[v] = 3-color[t];
                q.push(v);
            }
            else if(color[v] == color[t]) return 0;
        }
    }
    return 1;
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bool flag = true;
    for(int i = 1;i <= n;i++){
        if(!color[i]){
            if(!bfs(i, 1)){
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



