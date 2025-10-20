#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 20;

int n = 0;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u){
    if(u == n){
        for(int i = 0;i < n;i++) cout << g[i] << endl;
        cout << endl;
    }
    for(int i = 0;i < n;i++){
        if(!col[i] && !dg[u+i] && !udg[i-u+n]){
            g[u][i] = 'Q';
            col[i] = dg[u+i] = udg[i-u+n] = true;
            dfs(u+1);
            col[i] = dg[u+i] = udg[i-u+n] = false;
            g[u][i] = '.';
        }
    }
}

void solve(){
    cin >> n;
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            g[i][j] = '.';
    dfs(0);
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



