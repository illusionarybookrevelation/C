#include <bits/stdc++.h>
using namespace std;
int n,cough,ans;
string name;   //循环n次读入，可以重复使用变量
double temp;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>name>>temp>>cough;   //读入病人的信息
        if(temp>=37.5&&cough)     //如果符合筛查条件
        {
            cout<<name<<endl;   //输出名字
            ans++;              //被初筛为甲流的病人数量+1
        }
    }
    cout<<ans<<endl;     //输出被初筛为甲流的病人数量
    return 0;
}