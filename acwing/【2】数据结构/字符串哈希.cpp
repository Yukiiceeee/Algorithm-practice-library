#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;
typedef unsigned long long ULL;

// 一般字符串哈希都把P取值为131（经验，减少冲突）
const int N = 100010, P = 131;

// 字符串哈希可以快速地判断子串
// 处理很多字符串子串的时候都可以用字符串哈希映射子串
// 核心思路：可以将每个字符串都转化映射为一个数，采用P进制，字符串的高k位对应p^k
// 对于一个区间的字符串，就可以采取（右子串数值 - 左子串数值左移差位）来得到这个区间的字符串对应的数值是多少
// 这个数值会很高，所以通过取模来进行映射。一般是取p=131，mod 2^64 

int n, m;
char str[N];
// p数组用于存储预处理的p的多少多少次方
ULL h[N], p[N];

ULL get_substr(int l, int r){
    // 让左子串哈希左移到和右子串哈希最高位相同的位置
    // 相减得到右子串比左子串多出来的部分，也就是区间的哈希值
    return h[r] - h[l-1] * p[r - l + 1];
}

void solve(){
    cin >> n >> m;
    cin >> str+1;
    p[0] = 1;

    for(int i = 1;i <= n;i++){
        p[i] = p[i-1] * P;
        h[i] = str[i] + h[i-1] * P;
    }
    // h[1] = str[1] （即 a 的 ASCII 值）
    // h[2] = str[2] + h[1] * P （即 b + a * P）
    // h[3] = str[3] + h[2] * P （即 c + b * P + a * P^2）

    while(m--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        // O(1)的速度找到两个子串的哈希值并比较
        // 如果是substr()这种方法来返回子串的话，时间复杂度是O(n)的
        if(get_substr(l1, r1) == get_substr(l2, r2)) cout << "Yes" << endl;
        else cout << "No" << endl;
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



