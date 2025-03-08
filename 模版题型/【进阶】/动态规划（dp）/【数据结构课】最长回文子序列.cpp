#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int dp[n][n];

    for(int i = 0;i < n;i++)
    {
        dp[i][i] = 1;
    }
    for(int i = 1;i < n;i++)
    {
        for(int j = 0;j < i;j++)
        {
            dp[i][j] = 0;
        }
    }

    for(int l = 1;l < n;l++)
    {
        for(int i = 0;i < n-l;i++)
        {
            if(str[i] == str[i+l])
            {
                dp[i][i+l] = dp[i+1][i+l-1]+2;
            }
            else
            {
                dp[i][i+l] = max(dp[i+1][i+l],dp[i][i+l-1]);
            }
        }
    }

    cout << dp[0][n-1] << endl;
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























