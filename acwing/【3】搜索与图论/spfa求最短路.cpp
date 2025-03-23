#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
int n, m;
vector<vector<pp>> g(N);
int dis[N];
bool st[N];

void spfa(){
    dis[1] = 0;
    queue<int> q;
    q.push(1);
    st[1] = true;

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        st[t] = false;

        for(pp u : g[t]){
            int y = u.first, w = u.second;
            if(dis[y] > dis[t] + w){
                dis[y] = dis[t] + w;
                if(!st[y]){
                    q.push(y);
                    st[y] = true;
                }
            }
        }
    }
    if(dis[n] == 0x3f3f3f3f) cout << "impossible" << endl;
    else cout << dis[n] << endl;
}

void solve(){
    cin >> n >> m;
    memset(dis, 0x3f3f, sizeof dis);
    for(int i = 1;i <= m;i++){
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
    }

    spfa();
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



