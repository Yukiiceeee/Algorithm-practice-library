#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 20;

int n = 0;
// int path[N];
char ans[N][N];
// col[i]表示第i列在此时能否可取皇后，防止每一行选取了同一个列的位置
// 为了满足“皇后间必须不处于同一条斜线上”这个条件，需要判定所有位置是否位于独立的对角线上
// 两个坐标在同一条对角线上的条件为：ans[u1][i1]，ans[u2][i2]，如果u1-i1等于u2-i2，则位于同一主对角线
// 同样地，ans[u1][i1]，ans[u2][i2]，如果u1+i1等于u2+i2，则位于同一副对角线
// 因此，使用两个个数组来单独标记每一条对角线，数组下标就是u1-i1和u1+i1的索引值
bool col[N], dg[N], udg[N];

// 第u位是否可以取皇后
// ans[u][i]表示第u+1行第i+1列是否可以取皇后
void dfs(int u){
    if(u == n){
        for(int i = 0;i < n;i++) cout << ans[i] << endl;
        cout << endl;
    }
    for(int i = 0;i < n;i++){
        // 这一列没有用过 && 这根主对角线没有用过 && 这根副对角线没有用过
        if(!col[i] && !dg[u+i] && !udg[n-u+i]){
            ans[u][i] = 'Q';
            col[i] = dg[u+i] = udg[n-u+i] = true;
            dfs(u+1);
            col[i] = dg[u+i] = udg[n-u+i] = false;
            ans[u][i] = '.';
        }
    }
}

void solve(){
    cin >> n;
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            ans[i][j] = '.';
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



