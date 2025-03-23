#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 200010;

// 算法流程：
// 1. 将所有边按权重从小到大排序
// 2. 按权重从小到大加边，关键是判断边的两个顶点是否连通，不连通才能加，否则不能加
// * 判断连通这个操作用并查集来实现
// * 具体来说，迭代开始前，每个顶点都是独立的n个集合
// * 从小到大的权重进行加边操作就是连通两个集合的操作，这和并查集相符合
// * 并查集的时间复杂度是O(1)
// 不需要存储图结构，只要能把输入的边存下来就可以了

int n, m;
int p[N];

struct Edge
{
    int a, b, w;
    // 在结构体里写比较函数，也可以在结构体外写cmp
    bool operator< (const Edge &W)const
    {
        return w < W.w;
    }
}edge[N];

bool cmp(const Edge &a, const Edge & b){
    return a.w < b.w;
}

int find(int x){
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void kruskai(){
    sort(edge + 1, edge + m + 1, cmp);
    int ans = 0, cnt = 0;
    for(int i = 1;i <= n;i++) p[i] = i;
    for(int i = 1;i <= m;i++){
        int a = edge[i].a, b = edge[i].b, w = edge[i].w;
        if(find(a) != find(b)){
            p[find(a)] = find(b);
            ans += w;
            cnt++;
        }
    }
    if(cnt < n-1) cout << "impossible" << endl;
    else cout << ans << endl;
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a, b, w;
        cin >> a >> b >> w;
        edge[i] = {a, b, w};
    }

    kruskai();
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



