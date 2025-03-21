#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
const int M = 2 * N;

int n;
int h[N], e[M], ne[M], idx;
bool st[N];
int ans = N;

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int dfs(int x){
    st[x] = true;
    int sum = 1, res = 0;
    for(int i = h[x];i != -1;i = ne[i]){
        int j = e[i];
        if(!st[j]){
            int s = dfs(j);
            res = max(res, s);
            sum += s;
        }
    }

    res = max(res, n-sum);
    ans = min(ans, res);
    return sum;
}

void solve(){
    memset(h, -1, sizeof h);
    cin >> n;
    for(int i = 1;i <= n-1;i++){
        int a, b;
        cin >> a >> b;
        add(a, b);
        add(b, a);
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



