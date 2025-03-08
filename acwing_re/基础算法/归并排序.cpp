#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1000010;
vector<ll> temp(N);

void merge_sort(vector<int> &vtr, int l, int r){
    if(l >= r) return;
    int mid = (l+r) >> 1;
    merge_sort(vtr, l, mid);
    merge_sort(vtr, mid+1, r);

    int k = 0, i = l, j = mid+1;
    while(i <= mid && j <= r){
        if(vtr[i] <= vtr[j]) temp[k++] = vtr[i++];
        if(vtr[i] >= vtr[j]) temp[k++] = vtr[j++];
    }
    while(i <= mid) temp[k++] = vtr[i++];
    while(j <= r) temp[k++] = vtr[j++];

    for(int i = l, q = 0;i <= r;i++) vtr[i] = temp[q++];
}

void solve(){
    int n = 1;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 0;i < n;i++) cin >> vtr[i];
    merge_sort(vtr, 0, n-1);
    for(int i = 0;i < n;i++) cout << vtr[i] << " ";
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



