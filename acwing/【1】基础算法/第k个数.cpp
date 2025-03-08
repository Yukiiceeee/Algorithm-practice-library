#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k = 0;

ll searchk(vector<ll> &vtr, int l, int r)
{
    ll p = vtr[l];
    int i = l;
    int j = r;

    while(i < j){
        while(i < j && vtr[j] >= p) j--;
        vtr[i] = vtr[j];
        while(i < j && vtr[i] <= p) i++;
        vtr[j] = vtr[i];
    }
    vtr[i] = p;
    
    if(k < i){
        return searchk(vtr, l, i-1);
    }
    else if(k > i){
        return searchk(vtr, j+1, r);
    }
    else{
        return vtr[i];
    }
}

int main()
{
    cin >> n >> k;
    vector<ll> vtr(n+1);
    for (int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    ll ans = searchk(vtr, 1, n);
    cout << ans << endl;

    return 0;
}