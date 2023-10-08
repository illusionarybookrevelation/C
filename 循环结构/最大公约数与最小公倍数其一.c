#include <stdio.h>

int main()
{
    int m,n,k,s;                            /*求最大公约数*/
    scanf("%d %d",&m,&n);
    k = m%n;                   //两数相除取余数
    s = m*n;                    //求两数之积
    while(k!=0){
        m = n;                 //当余数k不等于0时将除数n赋给被除数m
        n = k;                  //余数k赋给除数n
        k = m%n;                //再次计算k，直至k为0时循环结束，此时n即为最大公约数
    }
    s = s/n;                            /*求最小公倍数，将两数之积除以最大公约数方可得出*/
    printf("最大公约数为：%d\n",n);
    printf("最小公倍数为：%d\n",s);
    return 0;
}

