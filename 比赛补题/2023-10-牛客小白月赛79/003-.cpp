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

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve()
{
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    int l = 0;

    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
        if(vtr[i] == 0)
        {
            l = i;
        }
    }

    int r = l;

    if(l == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll ans = 0;



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























