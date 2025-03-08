#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int step = 0;

ll check(ll x)
{
    ll mid = 1;
    while(x != 0)
    {
        int r = x%10;
        mid *= r;
        x = x/10;
    }
    if(mid/10 == 0)
    {
        return (step+1);
    }
    else
    {
        step++;
        return check(mid);
    }
}

int main()
{
    ll a = 0, b = 0;
    cin >> a >> b;
    int n = b - a + 1;

    vector<int> vtr(b+1);

    for(ll i = a;i <= b;i++)
    {
        step = 0;
        vtr[i] = check(i);
        // cout << vtr[i] << " ";
    }

    int maxx = 0;
    for(ll i = a;i <= b;i++)
    {
        if(vtr[i] > maxx)
        {
            maxx = vtr[i];
        }
    }
    cout << maxx << endl;

    int m = 0;
    for(ll i = a;i <= b;i++)
    {
        if(vtr[i] == maxx)
        {
            m = i;
            break;
        }
    }
    for(ll i = m+1;i <= b;i++)
    {
        if(vtr[i] == maxx)
        {
            cout << m << " ";
            m = i;
        }
    }
    cout << m;

    return 0;
}




































