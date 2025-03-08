#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 1000010;

// 单调队列：求窗口极值
// 队列里面存数组元素下标
// 队列是个双向队列，用数组来模拟
int n, k;
vector<int> vtr(N);

void solve_A(){
    cin >> n >> k;
    for(int i = 0;i < n;i++) cin >> vtr[i];
    vector<int> qe(N);
    int hh = 0, tt = -1;
    for(int i = 0;i < n;i++){
        if(hh <= tt && qe[hh] < (i-k+1)) hh++;
        while(hh <= tt && vtr[qe[tt]] >= vtr[i]) tt--;
        qe[++tt] = i;

        if(i >= k-1) cout << vtr[qe[hh]] << " ";
    }
}

void solve_B(){
    vector<int> qe(N);
    int hh = 0, tt = -1;
    for(int i = 0;i < n;i++){
        if(hh <= tt && qe[hh] < (i-k+1)) hh++;
        while(hh <= tt && vtr[qe[tt]] <= vtr[i]) tt--;
        qe[++tt] = i;

        if(i >= k-1) cout << vtr[qe[hh]] << " ";
    }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve_A();
        cout << endl;
        solve_B();
    }

    return 0;
}



