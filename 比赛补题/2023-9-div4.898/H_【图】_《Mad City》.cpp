#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b = 0;
    cin >> n >> a >> b;
    vector<vector<int>> g(n+1);

    for(int i = 1;i <= n;i++)
    {
        int u, v = 0;
        cin >> u >> v;
        g[u].push_back(v);
    }

    



}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++) {
        solve();
    }
    return 0;
}









