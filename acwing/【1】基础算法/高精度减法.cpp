#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 判断a >= b
bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() > b.size();
    else return a >= b;
}

// a >= b，计算a-b的值
vector<int> sub(vector<int> &a, vector<int> &b){
    vector<int> ans;
    int t = 0;
    for(int i = 0;i < a.size();i++){
        t = a[i] - t;
        if(i < b.size()) t -= b[i];
        ans.push_back((t+10)%10);
        if(t < 0) t = 1;
        else t = 0;
    }
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    
    return ans;
}

void solve(){
    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for(int i = a.size() - 1;i >= 0;i--) A.push_back(a[i]-'0');
    for(int i = b.size() - 1;i >= 0;i--) B.push_back(b[i]-'0');

    if(cmp(a,b)){
        vector<int> ans = sub(A, B);
        for(int i = ans.size() - 1;i >= 0;i--) cout << ans[i];
    }
    else{
        vector<int> ans = sub(B, A);
        cout << "-";
        for(int i = ans.size() - 1;i >= 0;i--) cout << ans[i];
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



