
// P1928 外星密码

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string ys()
{
    int n;
    char c;
    string ans;
    string s = "";
    while(cin >> c)
    {
        if(c == '[')
        {
            cin >> n;
            s = ys();
            for(int i = 1;i <= n;i++)
            {
                ans += s;
            }
        }
        else
        {
            if(c == ']')
                return ans;
            else
                s += c;
        }
    }
}

int main()
{
    cout << ys() << endl;
    return 0;
}





























