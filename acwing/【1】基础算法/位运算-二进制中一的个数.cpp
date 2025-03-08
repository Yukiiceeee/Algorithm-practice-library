#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int lowbit(int x){
    return x & -x;
}

void solve(){
    int n = 0;
    cin >> n;
    while(n--){
        int x = 0;
        cin >> x;
        int res = 0;
        while(x > 0) x -= lowbit(x), res++;
        cout << res << " ";
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



