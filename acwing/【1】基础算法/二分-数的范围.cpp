#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n = 0, q = 0;

void binary_search_right(vector<int> &vtr, int k){
    ll l = 0;
    ll r = n-1;
    ll mid = 0;

    // 如果check()为ture，那么缩到右边区间，因此最后是右区间的最左端
    while(l < r){
        mid = (l + r + 1) >> 1;
        if(vtr[mid] <= k) l = mid;
        else r = mid - 1;
    }
    if(vtr[l] == k) cout << l;
    else cout << "-1";
}

void binary_search_left(vector<int> &vtr, int k){
    ll l = 0;
    ll r = n-1;
    ll mid = 0;

    // 如果check()为ture，那么缩到左边区间，因此最后是左区间的最右端
    while(l < r){
        mid = (l + r) >> 1;
        if(vtr[mid] >= k) r = mid;
        else l = mid + 1;
    }
    if(vtr[l] == k) cout << l;
    else cout << "-1";
}

void solve(){
    cin >> n >> q;
    vector<int> vtr(n+1);
    for(int i = 0;i < n;i++){
        cin >> vtr[i];
    }
    for(int c = 1;c <= q;c++){
        int k = 0;
        cin >> k;
        binary_search_left(vtr, k);
        cout << " ";
        binary_search_right(vtr,k);
        cout << endl;
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



