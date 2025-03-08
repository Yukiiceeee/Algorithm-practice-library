#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 0x7ffffff;

void print_all(int m, int distance[1010][1010])
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(distance[i][j] == 0x7ffffff)
                printf("N/A ");
            else
                printf("%d ", distance[i][j]);
        }
        printf("\n");
    }
}

void solve()
{
    while(true)
    {
        int m, n = 0;
        cin >> m >> n;
        if(m == 0)
            break;

        int dp[1010][1010];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                    dp[i][j] = 0;
                else
                    dp[i][j] = N;
            }
        }

        for (int i = 0; i < n; i++)
        {
            int u, v, r = 0;
            cin >> u >> v >> r;
            dp[u][v] = r;
        }

        for (int k = 0; k < m; k++)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (dp[i][k] != N && dp[k][j] != N && dp[i][j] > dp[i][k] + dp[k][j])
                    {
                        dp[i][j] = dp[i][k] + dp[k][j];
                    }
                }
            }
        }
        print_all(m, dp);
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























