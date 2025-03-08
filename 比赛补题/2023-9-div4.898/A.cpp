#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    string str;
    cin >> str;
    if(str == "abc")
    {
        cout << "YES" << endl;
    }
    else
    {
        string m = str;
        for(int i = 0;i < 3;i++)
        {
            for(int j = i+1;j < 3;j++)
            {
                swap(str[i],str[j]);
                if(str == "abc")
                {
                    cout << "YES" << endl;
                    return;
                }
                else
                {
                    str = m;
                }
            }
        }
        cout << "NO" << endl;
    }
}

int main()
{
    int t = 0;
    cin >> t;

    for(int i = 1;i <= t;i++)
    {
        solve();
    }

    return 0;
}
















