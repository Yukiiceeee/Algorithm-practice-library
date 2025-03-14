#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

// DFS（暴搜）最关键的是“顺序”！按什么顺序搜索所有答案
int n = 0;
int path[N];
bool st[N];

void dfs(int u){
    if(u == n){
        for(int i = 0;i < n;i++) cout << path[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 1;i <= n;i++){
        if(!st[i]){
            path[u] = i;
            st[i] = true;
            dfs(u+1);
            st[i] = false;
        }
    }
}

void solve(){
    cin >> n;
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



