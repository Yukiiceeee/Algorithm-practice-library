
// P2678 [NOIP2015 提高组] 跳石头
// ※关键：check()函数的写法

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll l = 1, n = 0, m = 0;

int check(vector<ll> vtr,ll mid)
{
    ll cod = 0;
    for(int i = 0;i <= n;i++)
    {
        if(vtr[i] < mid)
        {
            vtr[i+1] += vtr[i];
            vtr[i] = 0;
            cod++;
        }
    }
    if(cod <= m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin >> l >> n >> m;

    vector<ll> lengthf(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> lengthf[i];
    }
    vector<ll> length(n+2);
    length[0] = lengthf[1];
    for(int i = 1;i < n;i++)
    {
        length[i] = lengthf[i+1] - lengthf[i];
    }
    length[n] = l - lengthf[n];

    ll mid = 0;
    ll i = 0;
    ll j = 1e9;

    while(i < j)
    {
        mid = (i + j + 1) >> 1;

        if(check(length, mid) == 1)
        {
            i = mid;
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << i << endl;

    return 0;
}

























