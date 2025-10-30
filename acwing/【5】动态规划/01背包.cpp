#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

void solve(){
    int n, v = 0;
    cin >> n >> v;

    vector<vector<int>> f(n+1, vector<int>(v+1, 0));
    vector<pair<int, int>> vtr(n+1);
    for(int i = 1;i <= n;i++){
        cin >> vtr[i].first;
        cin >> vtr[i].second;
    }
    
    for(int i = 1;i <= n;i++){
        for(int j = 0;j <= v;j++){
            f[i][j] = f[i-1][j];
            if(j >= vtr[i].first)
                // 这里取max的原因在于，假如第一个物品体积和第二个一样，但第一个价值更高，如果不取max，第二个物品会覆盖掉第一个
                f[i][j] = max(f[i][j], f[i-1][j-vtr[i].first] + vtr[i].second);
        }
    }

    int ans = 0;
    for(int i = 0;i <= v;i++) ans = max(ans, f[n][i]);
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



