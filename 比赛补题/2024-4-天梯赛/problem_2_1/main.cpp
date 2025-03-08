#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n = 0,m = 0;
    cin >> n >> m;

    int a[n+1][m+1];
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= m;j++)
        {
            a[i][j] = 0;
        }
    }

    for(int i = 1;i <= n;i++)
    {
        int k = 0;
        cin >> k;
        a[i][0] = k;
        for(int j = 1;j <= k;j++)
        {
            int x = 0;
            cin >> x;
            a[i][x]++;
        }
    }

    int q = 0;
    cin >> q;
    vector<int> anss(q+1);

    for(int i = 1;i <= q;i++)
    {
        int l = 0, r = 0;
        cin >> l >> r;

        int ans = 0;
        for(int i = 1;i <= n;i++)
        {
            if(a[i][l] > 0 && a[i][r] > 0)
            {
                ans++;
            }
        }
        anss[i] = ans;
    }

    for(int i = 1;i <= q;i++)
    {
        cout << anss[i] << endl;
    }

    return 0;
}
