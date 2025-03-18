#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

// 拓扑序列：对于序列A，图中的每条边(x,y)在A中都出现在y之前，则称A是该图的一个拓扑序列。
// 带环则一定不存在拓扑序列（因此需要判环）
// 可以证明一个有向无环图一定存在一个拓扑序列，故也称为拓扑图
// 如何求拓扑序列：
// 1.入度为0的点一定能作为序列初始点，故而把所有入度为0的点入队
// 2.对这些初始点宽搜，每次取队头t宽搜，枚举t的所有出边
// 3.这时不能直接将某个结点加到序列后，因为不能判断该结点是否还有其它父节点与t直接相邻
// 4.因此，对t的所有邻接点，遍历一个就去掉这条边，并使该邻接点的入度-1
// 5.假如结点入度减到了0，那么就可以放到序列后面了
int n, m;
vector<vector<int>> g(N);
queue<int> q;
int d[N];
int cot = 0;

string bfs(){
    string ans;
    for(int i = 1;i <= n;i++){
        if(!d[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        auto u = q.front();
        ans += to_string(u);
        ans += " ";
        cot++;
        q.pop();
        for(int v : g[u]){
            d[v]--;
            if(d[v] == 0) q.push(v);
        }
    }

    return ans;
}

void solve(){
    cin >> n >> m;
    memset(d, 0, sizeof d);
    for(int i = 1;i <= m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        d[b]++;
    }
    string str = bfs();
    if(cot == n) cout << str << endl;
    else cout << -1 << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



