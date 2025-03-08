#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;

int n = 0;
ll k = 0;

int check(ll m, vector<ll>& vtr)
{
    ll cot = 0;
    for (int i = 1; i <= n; i++)
    {
        vtr[i] -= m;

        if (vtr[i] > 0)
        {
            if (vtr[i] % (k - 1) != 0)
            {
                cot += (vtr[i] / (k - 1) + 1);
            }
            else
            {
                cot += (vtr[i] / (k - 1));
            }
        }

        vtr[i] += m;
    }

    if (cot <= m)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<ll> vtr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> vtr[i];
    }

    cin >> k;

    if (k > 1)
    {
        ll i = 0, j = 1e9;
        ll mid = 0;

        while (i < j)
        {
            mid = (i + j) >> 1;

            if (check(mid, vtr) == 1)
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }
        cout << j << endl;
    }
    else
    {
        sort(vtr.begin(), vtr.end(), greater<ll>());
        cout << vtr[0] << endl;
    }


    return 0;
}