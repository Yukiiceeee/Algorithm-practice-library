#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int a[10][10])
{
    int judge = 1;

    vector<int> row(10,0);

    for(int i = 1;i <= 9;i++)
    {
        for(int j = 1;j <= 9;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                row[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
        for(int l = 1;l <= 9;l++)
        {
            if(row[l] >= 2)
            {
                judge = 0;
                return judge;
            }
            else
            {
                row[l] = 0;
            }
        }
    }

    vector<int> column(10,0);
    for(int j = 1;j <= 9;j++)
    {
        for(int i = 1;i <= 9;i++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                column[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
        for(int l = 1;l <= 9;l++)
        {
            if(column[l] >= 2)
            {
                judge = 0;
                return judge;
            }
            else
            {
                column[l] = 0;
            }
        }
    }

    vector<int> small(10,0);
    for(int i = 1;i <= 3;i++)
    {
        for(int j = 1;j <= 3;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 4;i <= 6;i++)
    {
        for(int j = 1;j <= 3;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 7;i <= 9;i++)
    {
        for(int j = 1;j <= 3;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 1;i <= 3;i++)
    {
        for(int j = 4;j <= 6;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 4;i <= 6;i++)
    {
        for(int j = 4;j <= 6;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 7;i <= 9;i++)
    {
        for(int j = 4;j <= 6;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 1;i <= 3;i++)
    {
        for(int j = 7;j <= 9;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 4;i <= 6;i++)
    {
        for(int j = 7;j <= 9;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    for(int i = 7;i <= 9;i++)
    {
        for(int j = 7;j <= 9;j++)
        {
            int index = a[i][j];
            if(index >= 1 && index <= 9)
            {
                small[index]++;
            }
            else
            {
                judge = 0;
                return judge;
            }
        }
    }
    for(int l = 1;l <= 9;l++)
    {
        if(small[l] >= 2)
        {
            judge = 0;
            return judge;
        }
        else
        {
            small[l] = 0;
        }
    }

    return judge;
}

void solve()
{
    int a[10][10];
    for(int i = 1;i <= 9;i++)
    {
        for(int j = 1;j <= 9;j++)
        {
            cin >> a[i][j];
        }
    }

    cout << check(a) << endl;
}


int main()
{
    int n = 0;
    cin >> n;

    for(int i = 1;i <= n;i++)
    {
        solve();
    }

    return 0;
}
