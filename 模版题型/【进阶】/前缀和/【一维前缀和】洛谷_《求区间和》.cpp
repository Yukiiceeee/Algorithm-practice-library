
// P8218 【深进1.例1】求区间和

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n = 0;
    cin >> n;

    vector<int> a(n+1);
    vector<ll> s(n+1);

    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }

    int m = 0;
    cin >> m;

    for(int i = 1;i <= m;i++)
    {
        int l = 0, r = 0;
        cin >> l >> r;

        cout << s[r] - s[l-1] << endl;
    }

    return 0;
}













