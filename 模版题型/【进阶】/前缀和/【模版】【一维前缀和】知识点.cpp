#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 前缀和：
// 原数组：a1,a2,a3,a4,a5……
// 前缀和数组：Si = a1+a2+a3+a4+a5+……+ai

// ※前缀和下标一定从1开始___定义S0 = 0

/*
    ① Si的求法：
    for(int i = 1;i <= n;i++) Si = Si-1 + ai

    ② Si的作用：能够快速求出原数组一段区间的和
    [l,r] = Sr - Sl-1
*/

const int N = 100000;

// 题目：输入一个n元素的数组，有m次询问，每次询问l,r，要求输出l到r的所有元素的和
int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    vector<int> a(n+1);
    vector<int> s(n+1);
    s[0]= 0;

    // 前缀和数组预处理
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    // 通过Sr-Sl-1得到[l,r]区间所有数的和
    for(int i = 1;i <= m;i++)
    {
        int l = 0,r = 0;
        cin >> l >> r;

        cout << s[r] - s[l-1] << endl;
    }

    return 0;
}















