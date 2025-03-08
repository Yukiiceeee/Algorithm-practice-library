#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int n = 0;
    bool ans = false;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    int max_length = 1;
    for(int i = 1;i < n;i++){
        if(vtr[i] != 0) max_length = max(i + vtr[i], max_length);
        else if(vtr[i] == 0){
            if(max_length <= i){
                ans = false;
                break;
            }
        }
    }
    if(max_length >= n) ans = true;

    if(ans) cout << "ture";
    else cout << "false";
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



