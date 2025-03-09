#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

int h[N];
// 开放寻址法：假如冲突就往后稍，直到访问到可行的位置

// 拉链法每个槽要拉一个链，也就是说每个槽里面对应有一个链表
// h[k]表示hash函数映射为k的节点，里面对应是头节点的索引
int e[N], ne[N], idx;
int n = 0;

void insert(int x){
    // k=哈希函数映射后的值，这个值的取值范围就缩小了
    // 每次插入一个数时都把这个数作为当前哈希映射链表的头节点
    int k = (x % N + N) % N;
    e[idx] = x;
    ne[idx] = h[k];
    h[k] = idx++;
}

bool find(int x){
    int k = (x % N + N) % N;
    for(int i = h[k];i != -1;i = ne[i]){
        if(e[i] == x) return true;
    }
    return false;
}

// 哈希表：将一个比较庞大的数据映射到从0-n
// 离散化算是一种特殊的哈希方式，特点是保序
// 一般hash函数取模运算，取的模要是一个质数，且尽可能离2的指数尽可能远（这样能尽可能使冲突概率更小）
void solve(){
    cin >> n;
    // memset()用于填充内存块，这是常用的初始化数组元素方式，h表示填充初指针，-1表示填充值，sizeof h是要填充的字节数
    memset(h, -1, sizeof h);
    while(n--){
        char op;
        int x;
        cin >> op >> x;
        if(op == 'I') insert(x);
        else{
            if(find(x)) cout << "Yes" << endl;
            else cout << "No" << endl;
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



