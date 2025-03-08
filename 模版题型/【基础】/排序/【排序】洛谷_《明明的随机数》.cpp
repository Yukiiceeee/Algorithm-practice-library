
// P1059 [NOIP2006 普及组] 明明的随机数

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
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    set<int> s;
    set<int>::iterator it;
    for(int i = 1;i <= n;i++)
    {
        s.insert(vtr[i]);
    }

    cout << s.size() << endl;
    for(it = s.begin();it != s.end();it++)
    {
        cout << (*it) << " ";
    }

    return 0;
}














