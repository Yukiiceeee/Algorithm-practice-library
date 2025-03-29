#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

int n, q;
vector<int> vtr(N);

void binary_search_left(vector<int> &vtr, int k){
    int l = 0, r = n-1;
    int mid = 0;
    while(l < r){
        mid = (l+r) >> 1;
        if(vtr[mid] >= k) r = mid;
        else l = mid+1;
    }
    if(vtr[r] == k) cout << r;
    else cout << -1;
}

void binary_search_right(vector<int> &vtr, int k){
    int l = 0, r = n-1;
    int mid = 0;
    while(l < r){
        mid = (l+r+1) >> 1;
        if(vtr[mid] <= k) l = mid;
        else r = mid-1;
    }
    if(vtr[r] == k) cout << r;
    else cout << -1;
}

void solve(){
    cin >> n >> q;
    for(int i = 0;i < n;i++){
        cin >> vtr[i];
    }
    for(int i = 1;i <= q;i++){
        int k = 0;
        cin >> k;
        binary_search_left(vtr, k);
        cout << " ";
        binary_search_right(vtr, k);
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



