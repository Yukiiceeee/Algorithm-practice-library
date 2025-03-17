#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int n, m;
int h[N], ne[2*N], e[2*N], idx;
int d[N], q[N];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int bfs(int x){
    int hh, tt = 0;
    q[0] = x;
    d[x] = 0;
    
    while(hh <= tt){
        int t = q[hh++];
        for(int i = h[t];i != -1;i = ne[i]){
            int j = e[i];
            if(d[j] == -1){
                d[j] = d[t] + 1;
                q[++tt] = j;
            }
        }
    }
    return d[n];
}

void solve(){
    cin >> n >> m;
    memset(d, -1 ,sizeof d);
    memset(h, -1, sizeof h);
    for(int i = 1;i <= m;i++){
        int a, b;
        cin >> a >> b;
        add(a, b);
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



