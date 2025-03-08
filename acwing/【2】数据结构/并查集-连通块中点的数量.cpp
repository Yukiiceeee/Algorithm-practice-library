#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int n, m;
// p[x]表示x的父节点是哪个
int p[N], sz[N];

// 返回x所在集合的编号
// 使用路径压缩优化，每次让节点查找根节点时自动使父节点重新指向根节点
int find(int x){
    // 如果x不是根节点，则令x的父节点通过树向上遍历，直到等于其根节点
    // 相当于找到x父节点值的同时，将p[x]定义为根节点，x的父节点就变成根节点了
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        p[i] = i;
        sz[i] = 1;
    }
    while(m--){
        string op;
        int a, b;
        cin >> op;
        if(op == "C"){
            // 让a的根节点的父节点指向b的根节点
            cin >> a >> b;
            if(find(a) == find(b)) continue;
            sz[find(b)] += sz[find(a)];
            p[find(a)] = find(b);
        }
        else if(op == "Q1"){
            cin >> a >> b;
            if(find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else if(op == "Q2"){
            cin >> a;
            cout << sz[find(a)] << endl;
        }
    }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



