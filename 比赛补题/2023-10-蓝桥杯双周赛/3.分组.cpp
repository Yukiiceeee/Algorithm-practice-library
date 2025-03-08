#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void read(int &x) //快读
{
    int f=1;x=0;
    char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') { x=x*10+ch-'0';ch=getchar();}
    x*=f;
}

int n, k = 0;

int check(vector<ll> &vtr, ll mid)
{
    int zushu = 1;
    int minnum = vtr[1];

    for(int i = 1;i <= n;i++)
    {
        if(vtr[i] - minnum > mid)
        {
            minnum = vtr[i];
            zushu++;
        }
    }

    if(zushu >= k)
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
    cin >> n >> k;

    vector<ll> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }
    sort(vtr.begin(), vtr.end());

    ll mid = 0;
    ll i = 0;
    ll j = 1e10;

    while (i < j)
    {
        mid = (i + j + 1) >> 1;

        if (check(vtr, mid) == 1)
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
    int t = 1;

    for(int i = 1;i <= t;i++)
    {
        solve();
    }

    return 0;
}























