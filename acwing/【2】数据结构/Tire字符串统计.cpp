#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

int son[N][26], cnt[N], idx = 0;

void insert(string str){
    // p是树的层数，u是该层对应有无这个字母
    int p = 0;
    for(int i = 0; str[i]; i++){
        int u = str[i] - 'a';
        if(!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }
    cnt[p]++;
}

int query(string str){
    int p = 0;
    for(int i = 0; str[i]; i++){
        int u = str[i] - 'a';
        if(!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}


void solve(){
    // Tire树：高效地存储、查找字符串集合的数据结构
    int n = 0; cin >> n;
    while(n--){
        char op;
        cin >> op;
        if(op == 'I'){
            string str;
            cin >> str;
            insert(str);
        }
        else{
            string str;
            cin >> str;
            cout << query(str) << endl;
        }
    }

    // 用map存储键值对来做
    // int n;
    // cin >> n;
    // map<string, int> mp;

    // while(n--){
    //     char op;
    //     cin >> op;
    //     if(op == 'I'){
    //         string str;
    //         cin >> str;
    //         mp[str]++;
    //     }
    //     else{
    //         string str;
    //         cin >> str;
    //         cout << mp[str] << endl;
    //     }
    // }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



