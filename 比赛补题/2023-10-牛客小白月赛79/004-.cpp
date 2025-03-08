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
    ll n = 0;
    cin >> n;
    ll a = pow(2,20);

    if(n % a == 0)
    {
        cout << 0 << endl;
    }
    else
    {

    }
}

int main()
{
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
    {
        solve();
    }

    return 0;
}



































