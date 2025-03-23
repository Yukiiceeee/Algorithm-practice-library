#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

// 朴素prim算法，和dijkstra类似，核心是算法流程
// 1. 初始化距离为正无穷
// 2. n次迭代，每次迭代先找到集合外（生成树外）到集合距离最小的点，然后用这个点更新到其它点到集合的距离
// 核心是更新的是到集合的距离

int g[N][N];


void solve(){
    
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



