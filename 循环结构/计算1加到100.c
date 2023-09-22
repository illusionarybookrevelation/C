#include <stdio.h>

int main()
{
    int i=1,sum1=0,j=1,sum2=0;
    while(i<=100){
        sum1 = sum1 + i;
        i++;
    }

    do{
        sum2 += j;
        j++;
    }while(j<=100);

    printf("1+。。+100等于(while循环)：%d\n",sum1);
    printf("1+。。+100等于(do...while循环)：%d",sum2);
    return 0;
}
