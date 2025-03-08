#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dfs(ll n)
{
    if(n <= 0)
        return 0;
    else
    {
        if(n%2 != 0)
            return 2*dfs(n/2-1) + 1;
        else
            return dfs(n/2-2) + dfs(n/2-1) + 1;
    }
}

int main()
{
    ll nx = 0;
    cin >> nx;
    ll n = nx - 4;
    ll answer = 0;
    if(nx >= 3)
        answer = dfs(n) + 2;
    else
        answer = 1;
    cout << answer << endl;

    return 0;
}


































