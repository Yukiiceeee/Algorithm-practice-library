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
    int n, q = 0;
    cin >> n >> q;

    for(int i = 1;i <= q;i++)
    {
        string str;
        cin >> str;

        int ans = 1;

        for(int j = 0;j < str.size();j++)
        {
            if(str[j] == 'R')
            {
                ans *= 2;
            }
            else
            {
                ans = ans*2-1;
            }
        }

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























