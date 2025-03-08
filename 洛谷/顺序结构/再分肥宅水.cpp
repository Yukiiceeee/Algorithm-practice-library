#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    double t;
    int n;
    cin >> t >> n;
    double ans = t/n;
    cout << fixed << setprecision(3) << ans << endl;
    cout << n*2 << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



