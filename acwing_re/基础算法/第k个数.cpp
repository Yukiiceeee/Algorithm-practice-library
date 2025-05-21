#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
int n = 0, k = 0;

int searchk(int vtr[], int l, int r){
    if(l == r) return vtr[l];
    int p = vtr[(l+r) >> 1], i = l-1, j = r+1;
    while(i < j){
        while(vtr[++i] < p);
        while(vtr[--j] > p);
        if(i < j) swap(vtr[i], vtr[j]);
    }
    int vot = j+1;
    if(k <= vot) return searchk(vtr, l, j);
    else return searchk(vtr, j+1, r);
}

void solve(){
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++) cin >> a[i];
    cout << searchk(a, 0, n-1) << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



