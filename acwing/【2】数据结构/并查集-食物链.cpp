#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int n, k;
int p[N], d[N];

// 关键：巧妙运用并查集集合建树过程中的路径，通过路径边长附带一些信息
// 不是每种类型维护一个单独的类型集合去存同类型的动物，并查集维护的关键是根节点代表某种类，维护其它节点与根节点的关系；
// 吃与被吃可以表述为一种关系，而吃的次序可以利用边长信息来表达
int find(int x){
    if(p[x] != x){
        int u = find(p[x]);
        d[x] += d[p[x]];
        p[x] = u;
    }
    return p[x];
}

void solve(){
    cin >> n >> k;
    int ans = 0;
    for(int i = 1;i <= n;i++) p[i] = i;
    while(k--){
        int l,x,y;
        cin >> l >> x >> y;
        if(x > n || y > n) ans++;
        else{
            int px = find(x), py = find(y);
            if(l == 1){
                if(px == py && (d[x] - d[y])%3) ans++;
                else if(px != py){
                    p[px] = py;
                    d[px] = d[y] - d[x];
                }
            }
            else{
                if(px == py && (d[x] - d[y] - 1)%3) ans++;
                else if(px != py){
                    p[px] = py;
                    d[px] = d[y] - d[x] + 1;
                }
            }
        }
    }
    cout << ans;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



