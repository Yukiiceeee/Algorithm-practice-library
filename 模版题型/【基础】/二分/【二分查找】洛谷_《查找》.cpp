// P2249 【深基13.例1】查找

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;

int binary_search(int target, vector<int> & vtr)
{
    int i = 1;
    int j = vtr.size() - 1;
    int mid = 0;

    while (i < j)
    {
        mid = (i + j) >> 1;

        if (vtr[mid] < target)
        {
            i = mid + 1;
        }
        else if (vtr[mid] >= target)
        {
            j = mid;
        }
    }

    if (vtr[j] != target)
    {
        return -1;
    }
    else
    {
        return j;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int m = 0;

    cin >> n >> m;

    if (n >= 1)
    {
        vector<int> vtr(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> vtr[i];
        }

        for (int x = 0; x < m; x++)
        {
            int m = 0;
            cin >> m;

            cout << binary_search(m, vtr) << ' ';
        }
    }

    return 0;
}