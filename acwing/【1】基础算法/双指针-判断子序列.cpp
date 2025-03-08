#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<ll> a(n+2);
    vector<ll> b(m+2);
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1;i <= m;i++) cin >> b[i];

    int ans = 0;
    for(int i = 1, j = 1;i <= n;i++){
        while(a[i] != b[j] && j <= m) j++;
        if(a[i] == b[j] && j <= m){
            ans++;
            j++;
        }
    }
    if(ans == n) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



