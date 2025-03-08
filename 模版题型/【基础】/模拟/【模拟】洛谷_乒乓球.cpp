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
    int hua, li = 0;
    int length = 0;
    int vtr[70000];
    char c;

    for(int i = 1;cin >> c && c != 'E';i++)
    {
        if(c == 'W')
        {
            vtr[i] = 1;
        }
        else
        {
            vtr[i] = 2;
        }
    }

    for(int i = 1;1;i++)
    {
        if(vtr[i] == 1)
            hua++,cout << "*" << hua << endl;
        else if(vtr[i] == 2)
            li++;
        else if(vtr[i] == 0)
        {
            cout << hua << ":" << li << endl << endl;
            break;
        }
        if(hua - li >= 2 || li - hua >= 2)
        {
            if(hua >= 11 || li >= 11)
            {
                cout << hua << ":" << li << endl;
                hua = 0;
                li = 0;
            }
        }
    }

    hua = 0;
    li = 0;

    for(int i = 1;1;i++)
    {
        if(vtr[i] == 1)
            hua++;
        else if(vtr[i] == 2)
            li++;
        else if(vtr[i] == 0)
        {
            cout << hua << ":" << li << endl;
            break;
        }
        if(hua - li >= 2 || li - hua >= 2)
        {
            if(hua >= 21 || li >= 21)
            {
                cout << hua << ":" << li << endl;
                hua = 0;
                li = 0;
            }
        }
    }

    return 0;
}




















