
// P1177 【模板】排序

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n = 0;
    cin >> n;

    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    sort(vtr.begin(),vtr.end());

    for(int i = 1;i <= n;i++)
    {
        cout << vtr[i] << " ";
    }

    return 0;
}





