#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

// 静态链表，即数组模拟链表（单链表（邻接表）、双链表），相比struct的动态链表而言更快

// head表示头节点的下标
// e[i]表示节点i的值
// ne[i]表示节点i的下一个节点下标
// idx为一个指针，存储当前用到了哪个节点，也就是节点索引
int head, e[N], ne[N], idx;

// 初始化链表头节点
void init(){
    head = -1;
    idx = 0;
}

// 将x插到头结点的位置
void add_to_head(int x){
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

// 将x插到下标是k的点的后面
void add(int k, int x){
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

// 将下标k后面的点删掉(直接跳过该节点即可)
void remove(int k){
    ne[k] = ne[ne[k]];
}

void solve(){
    int m;
    cin >> m;
    init();
    int k, x;
    while(m--){
        char op;
        cin >> op;
        if(op == 'H'){
            cin >> x;
            add_to_head(x);
        }
        else if(op == 'D'){
            cin >> k;
            if(k == 0) head = ne[head];
            remove(k - 1);
        }
        else if(op == 'I'){
            cin >> k >> x;
            add(k - 1, x);
        }
    }
    for(int i = head;i != -1;i = ne[i]){
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



