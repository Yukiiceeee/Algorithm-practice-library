#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 100000;

void solve(){
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    int ans = 0;
    vector<int> temp(N+1);

    for(int i = 1, j = 1;i <= n;i++){
        temp[vtr[i]]++;
        while(temp[vtr[i]] > 1){
            temp[vtr[j]]--;
            j++;
        }
        ans = max(ans, i-j+1);
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



