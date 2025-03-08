#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 2e5;

void solve()
{
    string str;
    cin >> str;

    int cod = 0;
    int ans = 0;
    int aod = 0;
    vector<int> atr;

    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == 'B')
        {
            atr.push_back(aod);
            aod = 0;
            cod++;
        }
        else
        {
            aod++;
        }
    }
    if(str[str.size()-1] == 'A')
    {
        atr.push_back(aod);
        aod = 0;
    }

    sort(atr.begin(), atr.end(), greater<int>());
    int num = cod;
    while(cod > 0)
    {
        ans += atr[num-cod];
        cod--;
    }

    cout << ans << endl;
}

int main()
{
    int t = 0;
    cin >> t;

    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}












