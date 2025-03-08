#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n = 0, m = 0;
    cin >> n >> m;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    vector<int> b(n+1);
    for(int i = 1;i <= n;i++) b[i] = vtr[i] - vtr[i-1];

    for(int i = 1;i <= m;i++){
        int l = 0, r = 0, c = 0;
        cin >> l >> r >> c;
        b[l] += c;
        if(r < n) b[r+1] -= c;
    }
    
    for(int i = 1;i <= n;i++){
        vtr[i] = 0;
        vtr[i] = vtr[i-1] + b[i];
    }

    for(int i = 1;i <= n;i++) cout << vtr[i] << " ";
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



