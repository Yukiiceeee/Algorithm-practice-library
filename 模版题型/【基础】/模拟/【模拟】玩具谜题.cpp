
// P1563 [NOIP2016 提高组] 玩具谜题

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, m = 0;
    cin >> n >> m;

    vector<pair<int, string>> vtr(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i].first;
        cin >> vtr[i].second;
    }

    vector<pair<int, int>> order(m+1);
    int pos = 1;
    for(int i = 1;i <= m;i++)
    {
        int fx = 0;
        int length = 0;
        cin >> fx;
        cin >> length;

        if(fx == vtr[pos].first)
        {
            int index = pos - length;
            if(index <= 0)
            {
                pos = index + (vtr.size()-1);
            }
            else
            {
                pos = index;
            }
        }
        else
        {
            int index = pos + length;
            if(index >= vtr.size())
            {
                pos = index - (vtr.size()-1);
            }
            else
            {
                pos = index;
            }
        }
    }

    // 00和 11表示顺时针（数组逆向），10和 01表示逆时针（数组顺向）

    cout << vtr[pos].second << endl;

    return 0;
}



















