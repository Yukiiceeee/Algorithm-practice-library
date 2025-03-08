#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, m, u, v, w = 0;
//    // 不存在边的权值
//    cin >> n >> m;
//    vector<vector<int>> g(n+1);
//
//    for(int i = 1;i <= m;i++)
//    {
//        cin >> u;
//        cin >> v;
//        g[u].push_back(v);
//    }

    // 存在边的权值
    cin >> n >> m;
    vector<vector<pair<int,int>>> g2(n+1);

    for(int i = 1;i <= m;i++)
    {
        cin >> u;
        cin >> v;
        cin >> w;
        g2[u].push_back({v,w});
    }

//    cout << g[2][1] << endl;
    cout << g2[2][1].first << " " << g2[2][1].second << endl;

    return 0;
}



















