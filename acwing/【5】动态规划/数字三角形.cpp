#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 510;

void solve(){
    int f[N][N];
    int n;
    cin >> n;

    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= i;j++)
            cin >> f[i][j];

    for(int i = n-1;i >= 1;i--){
        for(int j = 1;j <= i;j++){
            f[i][j] += max(f[i+1][j], f[i+1][j+1]);
        }
    }
    cout << f[1][1];
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



