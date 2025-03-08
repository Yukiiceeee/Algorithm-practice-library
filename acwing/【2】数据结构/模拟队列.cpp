#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

int que[N], hh, tt;

void init(){
    hh = 0;
    tt = 0;
}

void solve(){
    int m;
    cin >> m;
    while(m--){
        string op;
        cin >> op;
        int x;
        if(op == "push"){
            cin >> x;
            que[tt++] = x;
        }
        else if(op == "pop"){
            hh++;
        }
        else if(op == "empty"){
            if(hh == tt) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(op == "query"){
            cout << que[hh] << endl;
        }
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



