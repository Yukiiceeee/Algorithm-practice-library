#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n = 0, m = 0, q = 0;
    cin >> n >> m >> q;
    vector<vector<int>> vtr(n+1, vector<int>(m+1));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> vtr[i][j];
        }
    }
    vector<vector<ll>> sum(n+1, vector<ll>(m+1));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + vtr[i][j];
        }
    }

    for(int i = 1;i <= q;i++){
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        ll ans = 0;
        ans = sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1];

        cout << ans << endl;
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



