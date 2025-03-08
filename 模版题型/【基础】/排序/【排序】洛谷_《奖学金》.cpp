#include<bits/stdc++.h>
using namespace std;
struct student //学生 
{
    int c; //语文成绩 
    int m; //数学成绩 
    int e; //英语成绩 
    int all; //总分 
    int num; //学生学号 
}; //注意这里有一个分号 
int main()
{
    int n,max=1,j=0; //j：现输出的学生的个数 
    student a[301];
    cin>>n;
    for(int i=1;i<=n;++i) //处理每一个学生 
    {
        cin>>a[i].c>>a[i].m>>a[i].e; //输入成绩 
        a[i].all=a[i].c+a[i].m+a[i].e; //计算总分 
        a[i].num=i; //学号 
    }
    while(j!=5) //当然也可以直接定义一个比较函数，但这样更直观 
    {
        for(int i=2;i<=n;++i) //++i 比 i++ 要快一些 
        {
            if(a[i].all>a[max].all || (a[i].all==a[max].all && a[i].c>a[max].c) || (a[i].all==a[max].all && a[i].c==a[max].c && a[i].num<a[max].num))//虽然有“先且后或”，但还是要养成良好习惯 
            {
                max=i;
            }
        }
        cout<<a[max].num<<" "<<a[max].all<<endl;
        a[max].all=-1;
        max=1;
        ++j;
    }
    return 0; // 谢幕 
}