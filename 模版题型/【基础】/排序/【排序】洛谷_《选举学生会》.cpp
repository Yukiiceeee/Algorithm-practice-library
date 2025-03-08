
// P1271 【深基9.例1】选举学生会

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n,m = 0;
    cin >> n >> m;

    vector<int> vtr(m+1);
    for(int i = 1;i <= m;i++)
    {
        cin >> vtr[i];
    }

    sort(vtr.begin(), vtr.end());
    for(int i = 1;i <= m;i++)
    {
        cout << vtr[i] << " ";
    }

    return 0;
}









