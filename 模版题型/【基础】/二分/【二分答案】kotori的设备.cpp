
// P3743 kotori的设备

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
    int n, p = 0;
    cin >> n >> p;

    vector<pair<int, int>> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i].first;
        cin >> vtr[i].second;
    }





    return 0;
}











