#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n = 0;
    cin >> n;

    vector<int> vtr(n+2);
    int dp[n+1][n+1];
    int i,j,k,p = 0;

    for(int i = 0;i <= n;i++)
    {
        cin >> vtr[i];
    }

    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= n;j++)
        {
            dp[i][j] = 0;

        }
    }

    for(p = 2;p <= n;p++)
    {
        for(i = 1;i <= n-p+1;i++)
        {
            j = i+p-1;
            dp[i][j] = dp[i][i] + dp[i+1][j] + (vtr[i-1]*vtr[i]*vtr[j]);
            for(k = i+1;k < j;k++)
            {
                int temp = dp[i][k] + dp[k+1][j] + (vtr[i-1]*vtr[k]*vtr[j]);
                if(temp < dp[i][j])
                {
                    dp[i][j] = temp;
                }
            }
        }
    }

    cout << dp[1][n] << endl;
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























