#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int m, t ,s;
    cin >> m >> t >> s;
    int time = m*t-s;
    if(t!=0){
        if(time >= 0)  cout << time/t;
        else cout << 0;
    }
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



