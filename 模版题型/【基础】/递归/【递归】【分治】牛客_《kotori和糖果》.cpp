
// 关键：写等式，写 dfs(n) = ...
// 根据题意，找到二分树图的判定条件和思路，使递归时间复杂度为 log2n


#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 为了后续记忆化以减少运算，创建一个 map用来存放 n块糖果所应产生的代价
map<ll,ll> mp;

// 递归函数，每次分出两个子节点，使得时间复杂度为 O(log2n)
ll dfs(ll n)
{
    // 如果 n <= 2，则表示为“两个 1聚成 1堆”，直接return 0；
    if(n <= 2) return 0;
    // 记忆化
    if(mp.count(n))
        return mp[n];
        // 递归过程
    else
    {
        // 通过分析可知，假若 n为偶数，那么可以将其设想分解为 2/n个 2的情况；
        // 而 2/n个 2的情况所产生的代价相当于 n个 1产生的代价乘以 2，因此返回 2*dfs(n/2)
        if(n % 2 == 0)
            return mp[n] = 2*dfs(n/2);
        // 而如若 n为奇数，那么可以将其分解为 n/2个 1与 n/2+1个 1的情况；
        // 而 n/2个 1和 n/2+1个 1合并的话，会产生大小为 1的代价，因此要+1
        else
            return mp[n] = dfs(n/2) + dfs(n/2+1) + 1;
    }
}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1;i <= t;i++)
    {
        ll n = 0;
        cin >> n;


        if(!(n & (n-1)))
            cout << 0 << endl;
        else
            cout << dfs(n) << endl;
    }

    return 0;
}


















