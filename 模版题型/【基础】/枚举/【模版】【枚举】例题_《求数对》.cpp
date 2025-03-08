#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*
 * 题目描述：
 * 一个数组中的数互不相同，求其中和为 0 的数对的个数。
 *
 */

// 解题思路一：暴力解法
// 时间复杂度：O(n^2)

int solve1()
{
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);

    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    int cot = 0;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            if(vtr[i]+vtr[j] == 0)
            {
                cot++;
            }
        }
    }
    // 注意到，“数对”是可以前后调换位置的，因此有一个符合条件的(a,b)，则(b,a)也符合
    // 因此，当j从i开始遍历时，需要将最后的答案*2
    int ans = cot*2;

    return ans;
}

// 解题思路二：桶遍历记录
// 时间复杂度：O(n)

int solve2()
{
    int n = 0;
    cin >> n;
    vector<int> vtr(n+1);

    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    bool met[MAXN * 2];
    memset(met, 0, sizeof(met));
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (met[MAXN - vtr[i]])
        {
            ++ans;
            met[MAXN + vtr[i]] = true;
        }
    }

    return ans;
}

// 程序检验
int main()
{
    int ans = solve1();

    cout << ans << endl;

    return 0;
}



