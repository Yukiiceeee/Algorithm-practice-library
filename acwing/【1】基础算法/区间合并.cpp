#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void merge(vector<p> &vtr){
    vector<p> res;
    sort(vtr.begin(), vtr.end());
    int st = -2e9, ed = -2e9;

    for(auto item: vtr){
        if(ed < item.first){
            if(ed != -2e9) res.push_back({st,ed});
            st = item.first;
            ed = item.second;
        }
        else ed = max(ed, item.second);
    }
    if(ed != -2e9) res.push_back({st,ed});
    vtr = res;
}

void solve(){
    int n = 0;
    cin >> n;
    vector<p> vtr;
    for(int i = 1;i <= n;i++){
        int a,b;
        cin >> a >> b;
        vtr.push_back({a,b});
    }

    merge(vtr);
    cout << vtr.size() << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



