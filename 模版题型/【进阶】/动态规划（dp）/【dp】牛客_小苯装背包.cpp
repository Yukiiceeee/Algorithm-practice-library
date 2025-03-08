#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, m = 0;
    cin >> n >> m;

    vector<int> money(n+1);
    for(int i = 1;i <= m;i++)
    {
        cin >> money[i];
    }

    if(n >= m*2)
    {
        cout << money[money.size()-1]*2 << endl;
    }
    else
    {
        int r = money.size()-1;
        int l = n - r;
        int ans = 0;

        while(r >= l)
        {
            ans = max(ans, money[r] + money[l]);
            r--;
            l++;
        }

        cout << ans << endl;
    }

    return 0;
}

















