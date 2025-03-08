#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*
    S[i,j]的含义：
    表示a11到aij所有元素的和

    ① S[i,j]如何计算：
    算法：简单的面积计算
    S[i,j] = S[i-1,j] + S[i,j-1] - S[i-1,j-1] + a[i,j]

    ② S[i,j]的用处：
    求给定 a[x1,y1]到 a[x2,y2]范围内所有元素的和
    算法：简单的面积求解问题：（S[x1-1,y1-1]被减了两次，要加一次）
    S = S[x2,y2] - S[x1-1,y2] - S[x2,y1-1] + S[x1-1,y1-1]
*/

// 输入一个n行m列的整数矩阵，再输入q次询问，每次询问包含x1,y1,x2,y2,输出子矩阵中所有数的和

int main()
{
    int n = 0,m = 0, q = 0;
    cin >> n >> m >> q;

    int a[n+1][m+1];
    int s[n+1][m+1];

    // 前缀和预处理
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
        }
    }

    for(int i = 1;i <= q;i++)
    {
        int x1 = 0, y1 = 0;
        int x2 = 0, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1];
    }

    return 0;
}






























