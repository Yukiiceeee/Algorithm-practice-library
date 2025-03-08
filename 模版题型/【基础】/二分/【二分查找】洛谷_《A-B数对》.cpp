// P1102 A-B 数对

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll binary_search_left(ll target, vector<ll>& vtr)
{
    ll i = 1;
    ll j = vtr.size() - 1;
    ll mid = 0;

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

ll binary_search_right(ll target, vector<ll>& vtr)
{
    ll i = 1;
    ll j = vtr.size() - 1;
    ll mid = 0;

    while (i < j)
    {
        mid = (i + j + 1) >> 1;

        if (vtr[mid] <= target)
        {
            i = mid;
        }
        else if (vtr[mid] > target)
        {
            j = mid - 1;
        }
    }

    if (vtr[j] != target)
    {
        return -2;
    }
    else
    {
        return i;
    }
}


int main()
{
    ll n = 0;
    ll c = 0;
    cin >> n >> c;

    vector<ll> vtr(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> vtr[i];
    }

    sort(vtr.begin(), vtr.end());

    ll cot = 0;
    for (ll x = n; x >= 1; x--)
    {
        ll target = vtr[x] - c;

        cot += binary_search_right(target, vtr) - binary_search_left(target, vtr) + 1;
    }

    cout << cot << endl;

    return 0;
}