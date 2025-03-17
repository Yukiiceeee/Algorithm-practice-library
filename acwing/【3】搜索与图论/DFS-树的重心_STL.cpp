#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
int n = 0;
vector<vector<int>> g(N);
vector<bool> st(N);

int ans = N;

// 返回以x为根的子树中点的数量
int dfs(int x){
    int sum = 1, res = 0;
    st[x] = true;

    // 遍历当前顶点x的所有邻接顶点
    for(int y : g[x]){
        if(!st[y]){
            int s = dfs(y);
            res = max(res, s);
            sum += s;
        }
    }

    res = max(res, n-sum);
    ans = min(res, ans);
    return sum;
}

void solve(){
    cin >> n;
    for(int i = 0;i < n-1;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);
    cout << ans << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



