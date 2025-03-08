
// P3143 [USACO16OPEN] Diamond Collector S

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e6;
int n = 0;
ll k = 0;
int vtr[N];

int find(int target, int p)
{
    int i = 1;
    int j = p;
    int mid = 0;
    while(i < j)
    {
        mid = (i + j) >> 1;
        if(vtr[mid] >= target)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
    }
    return i;
}

int main()
{
    cin >> n >> k;

    for(int i = 1;i <= n;i++)
    {
        cin >> vtr[i];
    }

    sort(vtr + 1, vtr + n + 1);

    vector<int> min_left(n+1);

    for(int i = n;i >= 1;i--)
    {
        int target = vtr[i] - k;
        min_left[i] = find(target, i);
    }

    vector<int> qujian(n+1);
    // 为了找到不重叠的第二大的区间，我们要对到第 i个数为止最大的区间长度进行预处理
    for(int i = 1;i <= n;i++)
    {
        int qj = i - min_left[i] + 1;
        // 每次更新区间最大值，使得 qujuan[i]表示的是到第 i个数左侧所有数向左能达到的区间的最大长度
        qujian[i] = max(qujian[i-1], qj);
    }

    int ans = 0;
    for(int i = 1;i <= n;i++)
    {
        int len = i - min_left[i] + 1;
        ans = max(ans, len + qujian[min_left[i] - 1]);
    }
    cout << ans << endl;

    return 0;
}






















