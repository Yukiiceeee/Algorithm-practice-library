#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n = 0;
    cin >> n;
    vector<vector<ll>> vtr(3, vector<ll>(n+1)); 
    for(int i = 1;i <= 2;i++){
        for(int j = 1;j <= n;j++){
            cin >> vtr[i][j];
        }
    }
    ll time = 0;
    
    
}

int main(){
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



