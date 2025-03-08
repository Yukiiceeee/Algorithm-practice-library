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
    int m = 0;
    cin >> n >> m;

    if((n*m)%6 == 0 && n >= 2 && m >= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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























