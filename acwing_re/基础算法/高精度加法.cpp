#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

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
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for(int i = a.size()-1;i >= 0;i--) A.push_back(a[i]-'0');
    for(int i = b.size()-1;i >= 0;i--) B.push_back(b[i]-'0');
    vector<int> ans = add(A, B);
    
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



