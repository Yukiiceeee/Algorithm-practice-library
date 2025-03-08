#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    // 请在此输入您的代码

    int t = 0;
    cin >> t;

    for(int i = 1;i <= t;i++)
    {
        string str;
        cin >> str;

        vector<int> vtr(5);
        for(int i = 0;i < 3;i++)
        {
            int cod = 0;
            for(int j = i+1;j < 4;j++)
            {
                if(str[i] == str[j])
                {
                    cod++;
                }
            }
            vtr[i] = cod;
        }

        int answer = 0;
        for(int i = 0;i <= 3;i++)
        {
            if(vtr[i] == 2)
            {
                answer = 1;
            }
            else if(vtr[i] == 3)
            {
                answer = 0;
                break;
            }
        }

        if(answer == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }

    return 0;
}

