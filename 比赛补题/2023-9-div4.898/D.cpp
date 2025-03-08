#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n, k = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    int ans = 0;

    for(int i = 0;i < n;i++)
    {
        if(str[i] == 'B')
        {
//            for(int j = i;j < i+k;j++)
//            {
//                str[j] = 'W';
//            }
            ans++;
            i+=k-1;
        }
    }
    for(int i = n-k;i < n;i++)
    {
        if(str[i] == 'B')
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++)
    {
        solve();
    }

    return 0;
}
















