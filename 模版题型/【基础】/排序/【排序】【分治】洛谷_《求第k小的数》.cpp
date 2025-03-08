
// P1923 【深基9.例4】求第 k 小的数

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n,k = 0;
    cin >> n >> k;

    vector<ll> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    sort(vtr.begin(),vtr.end());

    cout << vtr[k+1];

    return 0;
}











