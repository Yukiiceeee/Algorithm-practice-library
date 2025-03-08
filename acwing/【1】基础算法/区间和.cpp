#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;
const int N = 3000000;

vector<int> alls;
vector<ll> a(N+1);
vector<ll> s(N+1);

int find(int x){
    int l = 0, r = alls.size() - 1;
    while(l < r){
        int mid = (l+r) >> 1;
        if(alls[mid] >= x) r = mid;
        else l = mid+1;
    }
    return r+1;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<p> add, query;

    while(n--){
        int x, c;
        cin >> x >> c;
        add.push_back({x,c});
        alls.push_back(x);
    }
    while(m--){
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }

    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    
    for(auto item:add){
        int x = find(item.first);
        a[x] += item.second;
    }
    for(int i = 1;i <= a.size();i++) s[i] = s[i-1] + a[i];

    for(auto item:query){
        int l = find(item.first);
        int r = find(item.second);
        cout << s[r] - s[l-1] << endl;
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



