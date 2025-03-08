#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 实现a/b
vector<int> div(vector<int> &a, int b, int &r){
    vector<int> ans;
    for(int i = a.size()-1;i >= 0;i--){
        r = r*10 + a[i];
        ans.push_back(r / b);
        r %= b;
    }
    reverse(ans.begin(), ans.end());
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();

    return ans;
}

void solve(){
    string a;
    int b = 0;
    cin >> a >> b;
    vector<int> A;
    for(int i = a.size()-1;i >= 0;i--) A.push_back(a[i] - '0');
    int r = 0;
    vector<int> ans = div(A, b, r);
    for(int i = ans.size() - 1;i >= 0;i--) cout << ans[i];
    cout << endl << r;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



