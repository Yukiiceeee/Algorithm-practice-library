#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
const int M = 2 * N;

int n, m;
int h[N], e[M], ne[M], idx;
bool st[N];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int x){
    st[x] = true;

    for(int i = h[x];i != -1;i = ne[i]){
        int j = e[i];
        if(!st[j]) dfs(j);
    }
}

void solve(){
    memset(h, -1, sizeof h);
    dfs(1);
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



