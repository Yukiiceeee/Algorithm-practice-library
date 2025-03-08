#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    ll n, k = 0;
    cin >> n >> k;
    vector<ll> ftr(n+1,1);
    vector<ll> htr(n+1,1);
    map<ll,ll> mp;
    for(int i = 1;i <= n;i++)
    {
        cin >> ftr[i];
    }
    for(int i = 1;i <= n;i++)
    {
        cin >> htr[i];
    }

    ll length = 0;
    ll maxx = 0;
    ll fruits = 0;
    for(int i = 1;i <= n;i++)
    {
        fruits += ftr[i];
        if(fruits <= k && length == 0) {
            length++;
            maxx = max(maxx, length);
        }
        else if(fruits <= k && length != 0){
            if(htr[i-1] % htr[i] == 0)
            {
                length++;
                maxx = max(maxx, length);
            }
            else
            {
                fruits = ftr[i];
                length = 1;
                maxx = max(maxx, length);
            }
        }
        else {
            fruits = ftr[i];
            if(fruits <= k)
            {
                length = 1;
                maxx = max(maxx, length);
            }
            else
            {
                fruits = 0;
                length = 0;
            }
        }
    }
    cout << maxx << endl;
}

int main(){
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }
    return 0;
}









