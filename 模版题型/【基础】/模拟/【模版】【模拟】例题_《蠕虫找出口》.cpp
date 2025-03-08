#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*
 * 题目描述：
 * 一只长度不计的蠕虫位于 n 英寸深的井的底部。
 * 它每次向上爬 u 英寸，但是必须休息一次才能再次向上爬。
 * 在休息的时候，它滑落了 d 英寸。
 * 之后它将重复向上爬和休息的过程。
 * 之后它将重复向上爬和休息的过程。蠕虫爬出井口需要至少爬多少次？
 * 如果蠕虫爬完后刚好到达井的顶部，我们也设作蠕虫已经爬出井口。
 */

/*
 * 解题思路：
 * 直接使用程序模拟蠕虫爬井的过程就可以了。
 * 用一个循环重复蠕虫的爬井过程，当攀爬的长度超过或者等于井的深度时跳出。
 */

int solve()
{
    int n = 0, u = 0, d = 0;
    cin >> n >> u >> d;

    int length = 0;
    int ans = 0;

    // 直接用代码模拟蠕虫向上爬的过程
    while(length < n)
    {
        ans++;
        length += u;
        // 出错点：蠕虫最后一下爬上去是不会滑落的，因此不能直接length += (u-d)
        if(length >= n)
        {
            break;
        }
        else
        {
            length -= d;
        }
    }

    cout << ans << endl;
}











