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

int n,k = 0;

int check(ll mid, vector<ll> &vtr)
{
    int cod = 1;
    // 各分段的极差之和为 mid
    ll minn = vtr[1];
    for(int i = 1;i <= n;i++)
    {
        if(vtr[i] - minn > mid)
        {
            cod++;
            mid = mid - (vtr[i-1] - minn);
            minn = vtr[i];
        }
    }

    if(cod <= k)
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

    ll mid = 0;
    ll i = 0;
    ll j = 1e18;

    while (i < j)
    {
        mid = (i + j) >> 1;

        if (check(mid, vtr) == 1)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
    }

    cout << j << endl;
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























