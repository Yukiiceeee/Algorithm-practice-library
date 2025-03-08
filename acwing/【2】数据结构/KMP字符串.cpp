#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 1000100;

int n, m;
vector<int> ne(N);
char s[N], p[N];

void solve(){
    cin >> n >> p+1 >> m >> s+1;
    // 求next数组
    for(int i = 2, j = 0;i <= n;i++){
        while(j && p[i] != p[j+1]) j = ne[j];
        if(p[i] == p[j+1]) j++;
        ne[i] = j;
    }
    // 字符串匹配
    for(int i = 1, j = 0;i <= m;i++){
        while(j && s[i] != p[j+1]) j = ne[j];
        if(s[i] == p[j+1]) j++;
        if(j == n){
            cout << i-n << " ";
            j = ne[j];
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



