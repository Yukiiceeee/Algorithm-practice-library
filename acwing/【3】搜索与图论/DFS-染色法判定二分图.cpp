#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

// 性质：一个图是二分图当且仅当图中没有奇数环（边数是奇数的环）
// dfs遍历所有点，给每个点染色黑白色，假如染色发生冲突就不是二分图

int n, m;
vector<vector<int>> g(N);
int color[N];
bool st[N];

bool dfs(int u, int c){
    color[u] = c;
    for(int v : g[u]){
        if(!color[v]){
            if(!dfs(v, 3-c)) return false;
        }
        else if(color[v] == c) return false;
    }
    return true;
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
            if(!dfs(i, 1)){
                flag = false;
                break;
            }
        }
    }

    if(flag == false) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



