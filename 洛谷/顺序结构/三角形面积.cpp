#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    double a,b,c;
    cin >> a >> b >> c;
    double ans,p;
    p = (a+b+c)/2;
    ans = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << fixed << setprecision(1) << ans;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



