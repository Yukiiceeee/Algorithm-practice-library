#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

const int N = 100010;
// 如何表示BFS过程中的每个状态？如何定义状态转移？
// BFS过程中的queue如何定义？衡量当前状态到初始状态的距离如何定义？
// 用string来存每个状态的图

int bfs(string start){
    queue<string> q;
    unordered_map<string, int> d;
    string end = "12345678x";
    q.push(start);
    d[start] = 0;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        if(t == end) return d[t];

        int dis = d[t];
        int idx = t.find('x');
        int x = idx/3, y = idx%3;
        // 状态转移
        for(int i = 0;i < 4;i++){
            int a = x + dx[i], b = y + dy[i];
            if(a >= 0 && a < 3 && b >= 0 && b < 3){
                swap(t[idx], t[a*3+b]);
                if(!d.count(t)){
                    d[t] = dis + 1;
                    q.push(t);
                }
                swap(t[idx], t[a*3+b]);
            }
        }
    }
    return -1;
}

void solve(){
    string state;
    for(int i = 0;i < 9;i++){
        char a;
        cin >> a;
        state += a;
    }
    cout << bfs(state) << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



