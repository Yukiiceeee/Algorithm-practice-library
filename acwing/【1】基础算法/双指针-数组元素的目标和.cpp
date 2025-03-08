#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<ll> a(n+1);
    vector<ll> b(m+1);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];
    
    int i = 0, j = m-1;
    while(i < n || j >= 0){
        while(a[i] + b[j] > x) j--;
        while(a[i] + b[j] < x) i++;
        if(a[i] + b[j] == x) break;
    }
    cout << i << " " << j;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



