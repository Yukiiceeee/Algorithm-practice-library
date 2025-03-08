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
    string str;
    cin >> str;
    stringstream geek(str);
    int x = 0;
    geek >> x;
    if(x % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if(str.size() == 1)
            cout << 1 << endl;
        else
        {
            int cot = 0;
            int y = 0;
            int ans = 0;
            int length = str.size();
            for(int i = str.size()-1;i > 0;i--)
            {
                cot++;
                str.erase(i);
                stringstream geek(str);
                geek >> y;
                if(y % 2 == 0)
                {
                    ans = 1;
                    cout << cot << endl;
                    break;
                }
            }
            if(cot == length-1 && ans == 0)
            {
                cout << length << endl;
            }
        }
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























