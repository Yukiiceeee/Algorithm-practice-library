#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

typedef pair<int, int> pp;

const int N = 10;

int n = 0;
vector<int> node(N+1);
vector<bool> st(N+1, false);

void dfs(int m){
    if(m == n){
        for(int i = 0;i < n;i++) cout << node[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 1;i <= n;i++){
        if(!st[i]){
            node[m] = i;
            st[i] = true;
            dfs(m+1);
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
