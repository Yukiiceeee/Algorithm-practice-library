#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int right_binary(vector<int> &vtr, int l, int r, int k){
    int mid = 0;
    while(l < r){
        mid = (l+r+1) >> 1;
        if(vtr[mid] <= k) l = mid;
        else r = mid-1;
    }
    if(vtr[l] == k) return l;
    else return -1;
}

int left_binary(vector<int> &vtr, int l, int r, int k){
    int mid = 0;
    while(l < r){
        mid = (l+r) >> 1;
        if(vtr[mid] >= k) r = mid;
        else l = mid+1;
    }
    if(vtr[l] == k) return l;
    else return -1;
}

void solve(){
    int n = 0, q = 0;
    cin >> n >> q;
    vector<int> vtr(n+1);
    for(int i = 0;i < n;i++) cin >> vtr[i];
    while(q--){
        int k = 0;
        cin >> k;
        int left = left_binary(vtr, 0, n-1, k);
        int right = right_binary(vtr, 0, n-1, k);
        cout << left << " " << right << endl;
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



