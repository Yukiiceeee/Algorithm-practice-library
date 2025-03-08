#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int check(vector<ll> &vtr,ll mid,ll x,ll n)
{
    ll w = 0;
    for(int i = 1;i <= n;i++)
    {
        if(mid - vtr[i] > 0)
        {
            w += (mid - vtr[i]);
        }
    }
    if(w <= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    ll n, x = 0;
    cin >> n >> x;
    vector<ll> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }
    ll i = 0;
    ll j = 1e10;
    ll mid = 0;
    while (i < j)
    {
        mid = (i + j + 1) >> 1;

        if (check(vtr,mid,x,n) == 1)
        {
            i = mid;
        }
        else
        {
            j = mid - 1;
        }
    }

    cout << i << endl;
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









