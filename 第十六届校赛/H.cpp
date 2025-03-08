#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string str;
    cin >> str;
    ll ans,cur = 0;
    vector<ll> vtr;
    
    for(int i = 0;i < str.length();i++){
        cur = cur*10 + (str[i]-'0');
        vtr.push_back(cur);
    }
    for(int i = 0;i < vtr.size();i++){
        ans += vtr[i];
    }
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



