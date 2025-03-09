#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;
const int M = 3100010;

int n = 0;
vector<int> vtr(N+1);
int son[M][2];
int idx = 0;

// 用Tire树数据结构优化第二层循环；
// Tire树题目特征：按位查询或比较（数的每一位、字符串每一位等）
void insert(int x){
    int p = 0;
    for(int i = 31;i >= 0;i--){
        // &s表示引用，直接引用son[p][x >> i &1]这个数
        int &s = son[p][x >> i &1];
        // idx用于记录节点中节点数的总数
        if(!s) s = ++idx;
        p = s;
    }
}

int query(int x){
    int ans = 0, p = 0;
    for(int i = 31;i >= 0;i--){
        // x的第i位
        int s = x >> i &1;
        if(son[p][!s]){
            ans += 1 << i;
            p = son[p][!s];
        }
        else{
            ans += 0 << i;
            p = son[p][s];
        }
    }
    return ans;
}

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> vtr[i];
        insert(vtr[i]);
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        ans = max(ans, query(vtr[i]));
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



