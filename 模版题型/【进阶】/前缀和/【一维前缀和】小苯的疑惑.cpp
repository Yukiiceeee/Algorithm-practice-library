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

void solve()
{
    int n = 0;
    cin >> n;

    vector<ll> vtr(n+1);
    vector<ll> s(n+1);
    vector<ll> minsi(n+1);
    vector<ll> maxsi(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
        s[i] = vtr[i] + s[i-1];
    }

    for(int i = 1;i <= n;i++)
    {
        minsi[i] = min(s[i-1], minsi[i-1]);
    }
    maxsi[n] = s[n];
    for(int i = n-1;i >= 1;i--)
    {
        maxsi[i] = max(s[i], maxsi[i+1]);
    }

    for(int i = 1;i <= n;i++)
    {
        cout << maxsi[i] - min(minsi[i], (ll)0) << " ";
    }
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























