#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++){
        cin >> vtr[i];
    }
    int ans= 0;
    int minn = 101;
    ans += vtr[n];
    for(int i = 1;i <= n-1;i++){
        minn = min(minn, vtr[i]);
    }
    ans += minn;

    cout << ans << endl;
}

int main(){
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



