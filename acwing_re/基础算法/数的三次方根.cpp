#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;

void solve(){
    double n = 0.;
    cin >> n;

    double l = -10000.;
    double r = 10000.;
    double mid = 0.;
    while(r-l > 1e-8){
        mid = (l+r)/2;
        if(mid*mid*mid >= n) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(6) << l << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



