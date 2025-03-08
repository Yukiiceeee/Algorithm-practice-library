#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

// 左右边，第一个比当前数小或者大的数
// 思路类似双指针，先思考暴力做法，然后考虑如何利用性质缩小范围
// 思考一个数列，假如当前数左侧的数大于当前数，那么该数一定不会选为答案
// 所以备选序列一定是单调上升的
// 那么将某个数接在这个序列后的时候，必须保证当前序列后面的数都比这个数小，也就是删到离这个数最近的小于它的数位置
// 所以可以用一个栈数据结构实现
void solve(){
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);
    for(int i = 1;i <= n;i++) cin >> vtr[i];
    stack<int> st;
    st.push(vtr[1]);
    cout << -1 << " ";
    for(int i = 2;i <= n;i++){
        while(!st.empty()){
            if(st.top() >= vtr[i]) st.pop();
            else{
                cout << st.top() << " ";
                st.push(vtr[i]);
                break;
            }
        }
        if(st.empty()){
            cout << -1 << " ";
            st.push(vtr[i]);
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



