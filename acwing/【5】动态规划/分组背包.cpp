#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1010;
vector<int> f(N, 0);
vector<int> v(N, 0);
vector<int> w(N, 0);

void solve(){
    int n, m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        int s;
        cin >> s;

        for(int j = 0;j < s;j++) cin >> v[j] >> w[j];
        for(int j = m;j >= 0;j--)
            for(int k = 0;k < s;k++)
                if(j >= v[k]) f[j] = max(f[j], f[j-v[k]] + w[k]);
    }

    cout << f[m] << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



