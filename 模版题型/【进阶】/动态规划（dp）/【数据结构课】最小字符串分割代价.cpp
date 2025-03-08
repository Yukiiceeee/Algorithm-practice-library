#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;
    vector<int> vtr(m+2);
    vector<vector<int>> dp(m+2, vector<int>(m+2, 1e8));
    for(int i = 1;i <= m;i++)
    {
        cin >> vtr[i];
    }
    for(int i = 0;i <= m;i++)
    {
        dp[i][i+1] = 0;
    }
    vtr[m+1] = n;
    sort(vtr.begin() + 1, vtr.end());
    for(int len = 2;len <= m+1;len++)
    {
        for(int i = 0;i <= (m+1-len);i++)
        {
            int j = i+len;
            int r, l = 0;
            r = vtr[j];
            if(i == 0)
                l = r;
            else
                l = r - vtr[i];
            for(int k = i+1;k <= j-1;k++)
            {
                int c = l + dp[i][k] + dp[k][j];
                if(c < dp[i][j])
                {
                    dp[i][j] = c;
                }
            }
        }
    }

    cout << dp[0][m+1] << endl;
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























