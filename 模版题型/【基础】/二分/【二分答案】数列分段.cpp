
// P1182 数列分段 Section II

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int check(vector<ll> &vtr, ll mid, int n, int m)
{
    ll sum = 0;
    ll cod = 1;
    for(int i = 1;i <= n;i++)
    {
        if(vtr[i] > mid) return 0;
        if(sum + vtr[i] <= mid)
        {
            sum += vtr[i];
        }
        else
        {
            sum = vtr[i];
            cod++;
        }
    }
    //cout << cod << endl;

    return cod <= m;
}

int main()
{
    int n, m = 0;
    cin >> n >> m;
    vector<ll> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    ll i = 0;
    ll j = 1e10;
    ll mid = 0;

    while(i < j)
    {
        mid = (i + j) >> 1;

        if(check(vtr, mid, n, m) == 1)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
        // cout << i << endl;
    }
    cout << i << endl;

    return 0;
}




