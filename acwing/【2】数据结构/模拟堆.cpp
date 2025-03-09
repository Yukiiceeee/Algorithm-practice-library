#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

int n = 0;
int heap[N], hp[N], ph[N];
int sz = 0;

// 最关键的swap不仅仅要交换heap[]里的值，还要交换索引
void heap_swap(int a, int b){
    swap(ph[hp[a]], ph[hp[b]]);
    swap(hp[a], hp[b]);
    swap(heap[a], heap[b]);
}

void down(int i){
    int idx = i;
    if(i*2 <= sz && heap[i*2] < heap[idx]) idx = i*2;
    if(i*2+1 <= sz && heap[i*2+1] < heap[idx]) idx = i*2+1;
    if(idx != i){
        // swap(heap[i], heap[idx]);
        heap_swap(i, idx);
        down(idx);
    }
}

void up(int i){
    while(i/2 && heap[i/2] > heap[i]){
        heap_swap(i/2, i);
        i /= 2;
    }
}

void solve(){
    cin >> n;
    int idx = 0;
    while(n--){
        string op;
        cin >> op;
        if(op == "I"){
            int x;
            cin >> x;
            sz++;
            idx++;
            // ph存储第k个插入的数指向heap哪个位置，ph[x]表示第x个插入的数在heap里索引是什么
            // hp存储heap里某个数是第几个插入的
            ph[idx] = sz, hp[sz] = idx;
            heap[sz] = x;
            up(sz);
        }
        else if(op == "PM") cout << heap[1] << endl;
        else if(op == "DM"){
            heap_swap(1, sz);
            sz--;
            down(1);
        }
        else if(op == "D"){
            int k = 0;
            cin >> k;
            k = ph[k];
            heap_swap(k, sz);
            sz--;
            down(k);
            up(k);
        }
        else if(op == "C"){
            int k, x;
            cin >> k >> x;
            k = ph[k];
            heap[k] = x;
            down(k);
            up(k);
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



