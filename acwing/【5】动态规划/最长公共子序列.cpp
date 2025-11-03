#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1010;

void solve(){
    int n, m;
    cin >> n >> m;
    char a[N], b[N];
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int j = 1;j <= m;j++) cin >> b[j];

    int f[N][N];
    
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            f[i][j] = max(f[i-1][j], f[i][j-1]);
            if(a[i] == b[j]){
                f[i][j] = max(f[i][j], f[i-1][j-1] + 1);
            }
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



