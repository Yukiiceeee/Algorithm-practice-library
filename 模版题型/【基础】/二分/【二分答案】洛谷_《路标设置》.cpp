
// P3853 [TJOI2007] 路标设置

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int l, n, k = 0;

int check(vector<int> vtr, int mid)
{
    int cod = k;
    int pos = 0;
    for(int i = 1;i <= n;i++)
    {
        if(cod < 0)
        {
            break;
        }
        else
        {
            if(vtr[i] - pos <= mid)
            {
                pos = vtr[i];
            }
            else
            {
                pos += mid;
                i--;
                cod--;
            }
        }
    }
    if(cod >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin >> l >> n >> k;

    vector<int> lengthf(n+1);
    for(int i = 1;i <= n;i++)
    {
        cin >> lengthf[i];
    }

    int i = 0;
    int j = 1e8;
    int mid = 0;

    while(i < j)
    {
        mid = (i + j) >> 1;
        if(check(lengthf, mid) == 1)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
    }

    cout << j << endl;
    return 0;
}









