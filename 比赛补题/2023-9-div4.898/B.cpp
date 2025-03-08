#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }
    sort(vtr.begin(),vtr.end());
    int minn = vtr[1];

    ll ans = minn+1;
    for(int i = 2;i <= n;i++)
    {
        ans *= vtr[i];
    }
    cout << ans << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++)
    {
        solve();
    }
    return 0;
}















