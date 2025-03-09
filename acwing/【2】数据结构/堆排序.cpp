#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

// 用一个一维数组来存储堆状结构
// 由于是二叉树结构，因此定义：x的左儿子索引为2x；x的右儿子索引为2x+1
// 堆有两个基础操作：
// down(x)往下调整：如果堆里一个数变大了，那么大数需要往下走
// up(x)往上调整：如果堆里一个数变大了，那么小数需要往上走

// 插入一个数：在根最后一个位置插入新元素然后up(x)
// 删除头元素：将根最后一个数覆盖头元素，然后down(x)
// 拿取最小值：小根堆，直接获取头元素
// 删除任意元素：将该位置元素覆盖为尾元素，然后down(x)再接up(x)
// 修改任意元素：修改完，然后down(x)再接up(x)
int n, m;
int heap[N];
int sz = 0;

void down(int i){
    int idx = i;
    if(i*2 <= sz && heap[i*2] < heap[idx]) idx = i*2;
    if(i*2+1 <= sz && heap[i*2+1] < heap[idx]) idx = i*2+1;
    if(idx != i){
        swap(heap[i], heap[idx]);
        down(idx);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> heap[i];
    sz = n;
    for(int i = n/2; i; i--) down(i);

    while(m--){
        cout << heap[1] << " ";
        heap[1] = heap[sz];
        sz--;
        down(1);
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



