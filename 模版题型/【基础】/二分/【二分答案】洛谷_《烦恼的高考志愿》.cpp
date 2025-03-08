
// P1678 烦恼的高考志愿

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 二分查找离一位学生分数最近的院校分数线
ll check(ll target, vector<ll> &vtr)
{
    int mid = 0;
    int l = 0, r = vtr.size()-1;
    // 右二分查找
    while(l < r)
    {
        mid = (l+r) >> 1;
        if(vtr[mid] > target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    // 由于这是右查找二分，因此找到的是比目标值刚好大一级的分数
    // 因此，需要比较一下该数左侧的数，选差值绝对值最小的那个
    if(abs(vtr[r] - target) > abs(vtr[r-1] - target) && vtr[r-1] != 0)
    {
        return vtr[r-1];
    }
    else
    {
        return vtr[r];
    }
}

int main()
{
    // 数据读入与处理
    int m = 0, n = 0;
    cin >> m >> n;

    vector<ll> school(m+1);
    vector<ll> students(n+1);

    for(int i = 1;i <= m;i++)
    {
        cin >> school[i];
    }
    for(int i = 1;i <= n;i++)
    {
        cin >> students[i];
    }
    // 对院校分数线进行排序，方便后续二分查找
    sort(school.begin(),school.end());

    ll ans = 0;
    // 遍历学生数组进行二分查找，对每个学生查找最适合他分数的院校
    for(int i = 1;i <= n;i++)
    {
        ll target = students[i];
        ll p = check(target, school);
        // 使 ans每次加上每个学生对应的差值
        ans += abs(target - p);
    }

    cout << ans << endl;

    return 0;
}





















