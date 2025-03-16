#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 10;

int n = 0;
// int path[N];
char ans[N][N];
int row[N], col[N], dg[N*2], udg[N*2];

void dfs(int x, int y, int s){
    if(s > n) return;
    if(y == n) x++, y = 0;
    
    if(x == n){
        if(s == n){
            for(int i = 0;i < n;i++){
                cout << ans[i] << endl;
            }
            cout << endl;
        }
        return;
    }
    // 该位置不放皇后的分支
    dfs(x, y+1, s);
    // 该位置放皇后的分支
    if(!col[y] && !row[x] && !dg[x+y] && !udg[n-y+x]){
        ans[x][y] = 'Q';
        col[y] = row[x] = dg[x+y] = udg[n-y+x] = true;
        dfs(x, y+1, s+1);
        col[y] = row[x] = dg[x+y] = udg[n-y+x] = false;
        ans[x][y] = '.';
    }
}

void solve(){
    cin >> n;
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            ans[i][j] = '.';
    dfs(0, 0, 0);
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



