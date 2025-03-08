#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

// 用数组模拟栈（先进后出）
int stk[N], tt;

void solve(){
    int m;
    cin >> m;
    while(m--){
        string op;
        cin >> op;
        int x;
        if(op == "push"){
            cin >> x;
            stk[++tt] = x;
        }
        else if(op == "pop"){
            tt--;
        }
        else if(op == "empty"){
            if(tt > 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else if(op == "query"){
            cout << stk[tt] << endl;
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



