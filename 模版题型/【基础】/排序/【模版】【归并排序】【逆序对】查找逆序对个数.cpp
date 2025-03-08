
// 对于一个包含N个非负整数的数组A[1..n]，如果有i < j，且A[ i ]>A[ j ]，则称(A[ i] ,A[ j] )为数组A中的一个逆序对。
// 基础题型：给定一个数组，要求输出其中逆序对的个数；
// 题型解法：归并排序查找逆序对个数
// 时间复杂度：O(nlogn)

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 500000;
int n = 0;
int q[N+10];
int tmp[N+10];
ll ans = 0;

void ms(int q[], int l, int r)
{
    if(l >= r)  return;

    int mid = (l+r) >> 1;

    ms(q, l, mid);
    ms(q, mid+1, r);

    int k = 0, i = l, j = mid+1;
    while(i <= mid && j <= r)
    {
        if(q[i] <= q[j])   tmp[k++] = q[i++];
        else   tmp[k++] = q[j++],ans += mid-i+1; // 统计左右区间一次逆序产生的逆序对个数
    }
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];

    for(i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> q[i];
    }

    ms(q,0,n-1);

    cout << ans << endl;

    return 0;
}
























