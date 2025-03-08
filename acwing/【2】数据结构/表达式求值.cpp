#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

// 中缀表达式求值：例如(2+2)*(-(1+1)+2)
// 重点：确定运算优先级
// 用两个栈来存储运算符和数，这里必须保证"-"不作为负数标识出现
// 可以添加新的运算符，在hash map里定义运算符优先级并实现运算即可
stack<int> num;
stack<char> op;

void eval(){
    auto b = num.top(); num.pop();
    auto a = num.top(); num.pop();
    auto c = op.top(); op.pop();
    int x = 0;
    if(c == '+') x = a+b;
    else if(c == '-') x = a-b;
    else if(c == '*') x = a*b;
    else if(c == '/') x = a/b;
    num.push(x);
}

void solve(){
    unordered_map<char, int> pr{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};
    string str;
    cin >> str;
    for(int i = 0;i < str.size(); i++){
        auto c = str[i];
        if(isdigit(c)){
            int x = 0, j = i;
            while(j < str.size() && isdigit(str[j]))
                x = x*10 + str[j++] - '0';
            i = j-1;
            num.push(x);
        } 
        else if(c == '(') op.push(c);
        else if(c == ')'){
            while(op.top() != '(') eval();
            op.pop();
        }
        else{
            // 来一个优先级更低的运算，就先把运算优先级更高的上一个运算计算完
            while(op.size() && pr[op.top()] >= pr[c]) eval();
            op.push(c);
        }
    }
    while(op.size()) eval();
    cout << num.top() << endl;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



