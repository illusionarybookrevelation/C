#include <stdio.h>

int main()
{
    int m,n,k,i,s;
    scanf("%d %d",&m,&n);                   /*求最大公约数*/
    if(m>n){                      //先判断输入两个数m,n的大小，将最小的数赋值给k，
        k = n;
    }else{
        k = m;
    }
    for(i=k;i>0;i--){             // 然后做循环,i=k，i自减，判断，当出现i等于某个值使得m,n都能整除时结束循环，此时i为最大公约数
        if(m%i==0 && n%i==0){
            break;
        }
    }
    s = m*n/i;                  /*求最小公倍数，将两数之积除以最大公约数方可得出*/
    printf("最大公约数为：%d\n",i);
    printf("最小公倍数为：%d\n",s);
    return 0;
}

