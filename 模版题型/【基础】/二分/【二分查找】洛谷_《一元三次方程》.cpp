
// P1024 [NOIP2001 提高组] 一元三次方程求解

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

double a = 0, b = 0, c = 0, d = 0;

// 计算f(x)的值
double f(double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

int main()
{
    cin >> a >> b >> c >> d;
    double l = 0.,r = 0.;
    double x1 = 0.,x2 = 0.;
    double mid = 0.;
    int answers = 0;

    // 在每个区间内寻找根，每个区间长度为：1
    for(int i = -100;i <= 100;i++)
    {
        l = i;
        r = i + 1;
        x1 = f(l);
        x2 = f(r);

        if(!x1)
        {
            cout << fixed << setprecision(2) << l << " ";
            answers++;
        }
        /*
         * 如果写了x2这一部分，会重复（循环过程中，下一次循环就会使x2也满足条件）！
        if(x2 == 0)
        {
            cout << setprecision(2) << r << " ";
        }
        */
        if(x1*x2 < 0)
        {
            // 二分查找区间内符合条件的数
            // 将二分的区间范围限定到差值为0.001，更精确的时候就不考虑了，直接结束本区间的查找
            while(r-l >= 0.001)
            {
                // 设立二分中间值
                mid = (l+r)/2;
                // 用 mid和 r来判断——这样可以两边缩区间
                if(f(mid)*f(r) <= 0)
                {
                    l = mid;
                }
                else
                {
                    r = mid;
                    // 不能直接break！因为取的是r的值，需要将r不断逼近
                }
            }
            cout << fixed << setprecision(2) << r << " ";
            answers++;
        }
        if(answers == 3)
        {
            break;
        }
    }

    return 0;
}





