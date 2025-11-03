#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1010;

void solve(){
    




    // // n二次方复杂度实现方法
    // // f[i]表示的集合：所有以第i个数结尾的上升子序列
    // // f[i]值的含义：以第i个数结尾的上升子序列的最大长度
    // int n;
    // cin >> n;
    // int a[N], f[N];
    
    // for(int i = 1;i <= n;i++) cin >> a[i];
    // for(int i = 1;i <= n;i++) f[i] = 1;
    // for(int i = 1;i <= n;i++){
    //     for(int j = 1;j <= i;j++){
    //         if(a[i] > a[j]) f[i] = max(f[i], f[j]+1);
    //     }
    // }
    // int ans = 0;
    // for(int i = 1;i <= n;i++) ans = max(ans, f[i]);
    // cout << ans << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



