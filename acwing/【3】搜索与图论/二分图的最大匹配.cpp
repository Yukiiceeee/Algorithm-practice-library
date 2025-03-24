#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1010, M = 100010;
vector<vector<int>> g(N);
int match[N];
bool st[N];
int n1, n2, m;

bool find(int x){
    for(int j : g[x]){
        if(!st[j]){
            st[j] = true;
            if(match[j] == 0 || find(match[j])){
                match[j] = x;
                return 1;
            }
        }
    }

    return 0;
}

void solve(){
    cin >> n1 >> n2 >> m;
    for(int i = 1;i <= m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    
    int ans = 0;
    for(int i = 1;i <= n1;i++){
        memset(st, false, sizeof st);
        if(find(i)) ans++;
    }

    cout << ans << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



