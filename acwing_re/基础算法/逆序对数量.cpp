#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1000100;

vector<int> temp(N);

ll nixu(vector<int> &vtr, int l, int r){
    if(l >= r) return 0;
    int mid = (l+r) >> 1;
    // 左边递归 + 右边递归
    ll res = nixu(vtr, l, mid) + nixu(vtr, mid+1, r);

    int k = 0, i = l, j = mid+1;
    while(i <= mid && j <= r){
        if(vtr[i] <= vtr[j]) temp[k++] = vtr[i++];
        else{
            temp[k++] = vtr[j++];
            res += (mid-i+1);
        }
    }
    while(i <= mid) temp[k++] = vtr[i++];
    while(j <= r) temp[k++] = vtr[j++];

    for(int i = l, q = 0;i <= r;i++){
        vtr[i] = temp[q++];
    }
    return res;
}

void solve(){
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    ll ans = 0;
    ans = nixu(vtr, 1, n);
    cout << ans << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



