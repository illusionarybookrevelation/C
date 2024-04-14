#include <stdio.h>
int result(int m,int n);
int k;
int main()
{
    int m,n,s;                            /*求最大公约数*/
    scanf("%d %d",&m,&n);
    if(m < n){
        int temp;
        temp = m;
        m = n;
        n = temp;
    }
    s = m*n;                    //求两数之积
    s = s/ result(m,n);                            /*求最小公倍数，将两数之积除以最大公约数方可得出*/
    printf("最大公约数为：%d\n", result(m,n));
    printf("最小公倍数为：%d\n",s);
    return 0;
}
int result(int m,int n){
    k = m%n;  //两数相除取余数
    if(k == 0 ){
        return n;
    }else{
        m = n;
        n = k;
        return result(m,n);
    }
}
