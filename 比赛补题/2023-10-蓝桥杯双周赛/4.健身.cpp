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
    int n, m, q = 0;
    cin >> n >> m >> q;

    vector<int> vtr(n+1,1);
    for(int i = 1;i <= q;i++)
    {
        int day = 0;
        cin >> day;
        vtr[day] = 0;
    }

    vector<pair<ll,ll>> plan(m+1);
    for(int i = 1;i <= m;i++)
    {
        ll x, y = 0;
        cin >> x >> y;
        plan[i].first = pow(2,x);
        plan[i].second = y;
    }

    vector<int> days;
    int length = 0;
    for(int i = 1;i <= n;i++)
    {
        if(vtr[i] == 1)
        {
            length++;
            if(i == n)
            {
                days.push_back(length);
            }
        }
        else
        {
            if(length != 0)
            {
                days.push_back(length);
            }
            length = 0;
        }
    }

    for(int i = 1;i <= m;i++)
    {
        for(int j = i;j <= m;j++)
        {
            int bei = plan[j].first/plan[i].first;
            if(plan[j].second < plan[i].second*bei)
            {
                plan[j].first = 1e8;
            }
        }
    }

    ll ans = 0;
    for(int i = 0;i < days.size();i++)
    {
        for(int j = m;j >= 1;j--)
        {
            if(days[i] >= plan[j].first)
            {
                int p = days[i]/plan[j].first;
                days[i] -= p*plan[j].first;
                ans += p*plan[j].second;
            }
        }
    }

    cout << ans << endl;
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























