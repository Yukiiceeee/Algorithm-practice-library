#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

int e[N], l[N], r[N], idx;

void init(){
    // 0下标表示头，1下标表示尾
    l[1] = 0;
    r[0] = 1;
    // idx就从2开始
    idx = 2;
}

// 默认在k节点右边插入，若想左边则 k=l[k] 即可，即“在k左边节点的右边插入x”
void insert_k(int k, int x){
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    idx++;
}

void remove(int k){
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

void solve(){
    int m = 0;
    cin >> m;
    int x = 0, k = 0;
    init();
    while(m--){
        string op;
        cin >> op;
        if(op == "L"){
            cin >> x;
            insert_k(0, x);
        }
        else if(op == "R"){
            cin >> x;
            insert_k(l[1], x);
        }
        else if(op == "D"){
            cin >> k;
            remove(k+1);
        }
        else if(op == "IL"){
            cin >> k >> x;
            insert_k(l[k+1], x);
        }
        else if(op == "IR"){
            cin >> k >> x;
            insert_k(k+1, x);
        }
    }
    for(int i = r[0];i != 1;i = r[i]){
        cout << e[i] << " ";
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



