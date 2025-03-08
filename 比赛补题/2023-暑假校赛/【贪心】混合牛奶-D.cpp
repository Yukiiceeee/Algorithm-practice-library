#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    vector<pair<int, int>> vtr(m + 1);

    for (int i = 1; i <= m; i++)
    {
        cin >> vtr[i].first;
        cin >> vtr[i].second;
    }

    sort(vtr.begin(), vtr.end());

    ll cot = 0;
    ll answer = 0;

    for (int i = 1; i <= m; i++)
    {
        cot += vtr[i].second;

        if (cot <= n)
        {
            answer += vtr[i].first * vtr[i].second;
        }
        else
        {
            answer += vtr[i].first * (n - cot + vtr[i].second);
            break;
        }
    }

    cout << answer;

    return 0;
}