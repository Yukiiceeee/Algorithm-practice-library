#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1010;

int n, m;

void solve(){
    cin >> n >> m;
    vector<int> v(n+1);
    vector<int> w(n+1);
    vector<vector<int>> f(n+1, vector<int> (m+1, 0));

    for(int i = 1;i <= n;i++) cin >> v[i] >> w[i];
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            f[i][j] = f[i-1][j];
            if(j >= v[i]) f[i][j] = max(f[i][j], f[i][j-v[i]]+w[i]);
        }
    }

    cout << f[n][m] << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



