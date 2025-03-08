#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// check函数负责检查二分的数值是否满足题意
int check()
{
    if (true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 以i作为最终结果的二分法：
void binary_search_left()
{
    ll i = 1;
    ll j = 1e18;
    ll mid = 0;

    while (i < j)
    {
        mid = (i + j + 1) >> 1;

        if (check() == 1)
        {
            i = mid;
        }
        else
        {
            j = mid - 1;
        }
    }

    cout << i << endl;
}

// 以j作为最终结果的二分法：
void binary_search_right()
{
    ll i = 1;
    ll j = 1e18;
    ll mid = 0;

    while (i < j)
    {
        mid = (i + j) >> 1;

        if (check() == 1)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
    }

    cout << j << endl;
}



int main()
{
    cout << 1 << endl;
    return 0;
}