#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e6+10;

// 各类排序方法汇总：

// 1.快排
/*
    ① 确定分界点：一般用 mid
    ② ※调整区间；
    ③ 递归处理左右两端；函数递归，重复处理两端序列

    调整区间：
    采用双指针，同时往中间走；i向右，直到 i指向第一个＞x的数；
    j向左，直到 j指向第一个<x的数；
    然后将 i指向的数和 j指向的数交换。
    以此处理，直到 i=j.
 */

void qs(int q[], int l, int r)  // (int a[], int 0, int n-1)
{
    if(l >= r)  return;
    // x为分界点
    // i、j必须在边界的左右一格
    int x = q[l], i = l-1, j = r+1;
    // 调整区间，使得左右两侧序列有序
    while(i < j)
    {
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i], q[j]);
    }
    // 递归进行排序
    qs(q, l, j);
    qs(q, j+1, r);
}
// 每次默认选最后一个数作为分界数x
// 在一个数组上分为两侧，左侧小于x，右侧大于x
// ※重点在于交换两个数使得左右两侧有序，但无需注意稳定性

// 2.归并排序
/*
    核心思想：分治
    将前后相邻的两个有序表归并为一个有序表
    ① 确定分界点：mid
    ② 递归排序 left、right
    ③ ※归并将两个有序数组合为一个有序数组（双指针)
*/

int tmp[N];
void ms(int q[], int l, int r)
{
    if(l >= r)  return;

    int mid = (l+r) >> 1;
    // 对左侧、右侧分别归并，使其有序
    ms(q, l, mid);
    ms(q, mid+1, r);
    // 核心：两两归并
    //
    int k = 0, i = l, j = mid+1;
    while(i <= mid && j <= r)
    {
        if(q[i] <= q[j])   tmp[k++] = q[i++];
        else   tmp[k++] = q[j++];   // 求逆序对：res += mid + 1 - i; res(ll)
    }
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];

    for(i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
}

// 3.计数排序
/*
    核心思想：使用一个额外数组，存放 a数组中值等于 i的元素的个数
    将输入的数据值转化为键存储在额外开辟的数组空间中。
    作为一种线性时间复杂度的排序，计数排序要求输入的数据必须是有确定范围的整数。
    ① 分配。扫描一遍原始数组，以当前值-minValue作为下标，将该下标的计数器增1。
    ② 收集。扫描一遍计数器数组，按顺序把值收集起来。
*/

// 4.堆排序：不稳定
/*
    核心思想：利用大顶堆（小顶堆）的构造方法，不断从堆中取出堆头元素，再不断调整堆
    ① 建堆。将所给数组数字元素建为一个大顶堆（小顶堆）
       时间复杂度：O(n)
    ② 调整堆。每次输出堆头元素，再调整堆。每次都是从顶向下调整。
       时间复杂度：O(h)
    因此，总的时间复杂度为O(nlog2n)
    ※时间复杂度可证明
*/

// 5.冒泡排序：稳定     O(n^2)
// 6.选择排序：不稳定   O(n^2)
// 7.插入排序：稳定     O(n^2)
/*   希尔排序：不稳定
     在插入排序的基础上，对插入排序之前先分组
     时间复杂度：O(n^1.5)
*/









