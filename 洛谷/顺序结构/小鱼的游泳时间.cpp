#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int start = a*60 + b;
    int end = c*60 + d;
    int time = end - start;

    cout << time/60 << " " << time%60;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



