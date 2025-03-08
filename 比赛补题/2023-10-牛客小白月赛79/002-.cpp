


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

    vector<int> vtr(n+1);
    ll sum = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
        sum += vtr[i];
    }
    if(sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        int minn = 1e8;
        for(int i = 1;i <= n;i++)
        {
            if(vtr[i] % 2 != 0)
            {
                minn = min(vtr[i], minn);
            }
        }
        ll ans = sum - minn;
        cout << ans << endl;
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



































