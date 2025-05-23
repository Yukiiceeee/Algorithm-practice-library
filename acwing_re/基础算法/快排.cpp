#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

void quick_sort(int vtr[], int l, int r){
    if(l >= r) return;
    int p = vtr[(l+r)>>1], i = l-1, j = r+1;
    while(i < j){
        while(vtr[++i] < p);
        while(vtr[--j] > p);
        if(i < j) swap(vtr[i], vtr[j]);
    }
    quick_sort(vtr, l, j);
    quick_sort(vtr, j+1, r);
}

void solve(){
    int a[N];
    int n = 0;
    cin >> n;

    for(int i = 0;i < n;i++) cin >> a[i];
    quick_sort(a, 0, n-1);
    for(int i = 0;i < n;i++) cout << a[i] << " ";
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



