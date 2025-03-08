#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<ll>> vtr(n+2, vector<ll>(m+2));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> vtr[i][j];
        }
    }
    vector<vector<ll>> b(n+2, vector<ll>(m+2));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            b[i][j] = vtr[i][j] + vtr[i-1][j-1] - vtr[i-1][j] - vtr[i][j-1];
        }
    }

    while(q--){
        int x1,y1,x2,y2,c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        b[x1][y1] += c;
        b[x2+1][y2+1] += c;
        b[x1][y2+1] -= c;
        b[x2+1][y1] -= c;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            vtr[i][j] = 0;
            vtr[i][j] = vtr[i-1][j] + vtr[i][j-1] - vtr[i-1][j-1] + b[i][j];
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cout << vtr[i][j] << " ";
        }
        cout << endl;
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



