#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    double h, r;
    cin >> h >> r;
    double pai = 3.14;
    double v = (pai*r*r*h)/1000;
    int n = 20/v;
    if(n*v < 20) cout << n+1 << endl;
    else cout << n << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



