#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e6 + 10;

vector<int> add(vector<int> &a, vector<int> &b){
    vector<int> ans;
    int t = 0;

    for(int i = 0;i < a.size() || i < b.size();i++){
        if(i < a.size()) t += a[i];
        if(i < b.size()) t += b[i];
        ans.push_back(t%10);
        t /= 10;
    }
    if(t > 0) ans.push_back(1);
    return ans;
}

void solve(){
    // 用数组来存一个很大的整数，存储每一位的数
    // 计算时，模拟人工加减乘除，每一位都要计算，相当于a + b + t，t是上一位的进位数
    string a, b;
    vector<int> A, B;
    cin >> a >> b;

    for(int i = a.size() - 1;i >= 0;i--) A.push_back(a[i] - '0');
    for(int i = b.size() - 1;i >= 0;i--) B.push_back(b[i] - '0');

    vector<int> ans = add(A, B);
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



