#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, m = 0;
    cin >> n >> m;

    vector<int> d(n+1, -1);
    vector<vector<int>> g(n+1);
    queue<int> q;
    // 对图进行存储
    for(int i = 1;i <= m;i++)
    {
        int u, v = 0;
        cin >> u >> v;
        g[u].push_back(v);
    }

    int a, b = 0;
    cin >> a >> b;
    // 开始搜索过程
    // 初始化第一个结点的路为 0,并放入队列里
    q.push(a);
    d[a] = 0;
    // 队列非空，则图还未到终点，继续循环
    while(q.size())
    {
        int u = q.front();
        // 假设终点在中间
        if(u == b)
            break;
        // 将找过的节点从队列中删除
        q.pop();
        // 通过 g遍历一个节点连接的所有其它节点
        for(auto &ne:g[u])
        {
            // 判定这个节点是否是第一次走过的
            if(d[ne] == -1)
            {
                // 设权值为 1，该节点等于上个节点的路+1
                d[ne] = d[u] + 1;
                // 将该节点的路添加到队列里
                q.push(ne);
            }
        }
    }

    cout << d[b] << endl;

    return 0;
}








































