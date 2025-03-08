#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n = 0, m = 0;

ll prefix_add(vector<int> &vtr, vector<ll> &sum, int l, int r){
    return sum[r] - sum[l-1];
}

void solve(){
    cin >> n >> m;
    vector<int> vtr(n+1);
    vector<ll> sum(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    for(int i = 1;i <= n;i++) sum[i] = sum[i-1] + vtr[i];
    for(int i = 1;i <= m;i++){
        int l = 0, r = 0;
        cin >> l >> r;
        ll ans = 0;
        ans = prefix_add(vtr, sum, l, r);
        cout << ans <<endl;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



