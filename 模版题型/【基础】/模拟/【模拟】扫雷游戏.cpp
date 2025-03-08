
// P2670 [NOIP2015 普及组] 扫雷游戏

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

int main()
{
    int n, m = 0;
    cin >> n >> m;

    bool vtr[n+2][m+2];
    char c;
    memset(vtr, 0, sizeof(vtr));
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> c;
            if(c == '*')
            {
                vtr[i][j] = 1;
            }
        }
    }

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(vtr[i][j] == 1)
                cout << '*';
            else
            {
                cout << vtr[i-1][j-1] + vtr[i-1][j] + vtr[i-1][j+1] + vtr[i][j-1] + vtr[i][j+1] + vtr[i+1][j-1] + vtr[i+1][j] + vtr[i+1][j+1];
            }
        }
        cout << endl;
    }

    return 0;
}

















