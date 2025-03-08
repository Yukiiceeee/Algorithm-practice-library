#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    vector<string> vtr(10);
    for(int i = 0;i < 10;i++)
    {
        cin >> vtr[i];
    }
    int ans = 0;
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            if(vtr[i][j] == 'X')
            {
                int a,b,c,d = 0;
                a = i+1;
                b = j+1;
                c = 10 - i;
                d = 10 - j;
                int p1 = min(a,b);
                int p2 = min(c,d);
                int ans2 = min(p1,p2);
                ans += ans2;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++) {
        solve();
    }
    return 0;
}









