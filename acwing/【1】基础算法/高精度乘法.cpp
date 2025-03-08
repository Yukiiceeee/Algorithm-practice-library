#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> mul(vector<int> &a, int b){
    vector<int> ans;
    int t = 0;
    for(int i = 0;i < a.size();i++){
        t += a[i]*b;
        ans.push_back(t%10);
        t /= 10;
    }

    while(t){
        ans.push_back(t%10);
        t /= 10;
    }

    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    
    return ans;
}

void solve(){
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for(int i = a.size() - 1;i >= 0;i--) A.push_back(a[i] - '0');
    vector<int> ans;
    ans = mul(A, b);
    for(int i = ans.size() - 1;i >= 0;i--) cout << ans[i];
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



