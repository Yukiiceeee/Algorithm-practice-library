#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> f(5002);

int find(int x)
{
    if (x == f[x])
    {
        return x;
    }
    else
    {
        return f[x] = find(f[x]);
    }
}

int main()
{
    int n = 0, m = 0, p = 0;
    cin >> n >> m >> p;

    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
    }

    for (int i = 1; i <= m; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;

        if (find(x) != find(y))
        {
            f[find(x)] = find(y);
        }
    }

    for (int i = 1; i <= p; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;

        if (find(x) == find(y))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }


    return 0;
}










