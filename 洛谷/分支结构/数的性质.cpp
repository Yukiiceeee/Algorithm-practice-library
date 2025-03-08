#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int x;
    cin >> x;

    if(x%2 == 0 && (x > 4 && x <= 12)) cout << 1 << " ";
    else cout << 0 << " ";
    if(x%2 == 0 || (x > 4 && x <= 12)) cout << 1 << " ";
    else cout << 0 << " ";
    if((x%2 != 0 && (x > 4 && x <= 12)) || x%2 == 0 && (x <= 4 || x > 12)) cout << 1 << " ";
    else cout << 0 << " ";
    if(x%2 != 0 && (x <= 4 || x > 12)) cout << 1;
    else cout << 0;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



