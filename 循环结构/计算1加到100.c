#include <stdio.h>

int main()
{
    int i=1,sum1=0,j=1,sum2=0,k,sum3=0;
    while(i<=100){
        sum1 = sum1 + i;
        i++;
    }

    do{
        sum2 += j;
        j++;
    }while(j<=100);

    for(k=1;k<=100;k++){
        sum3 += k;
    }
    printf("1+...+100等于(while循环)：%d\n",sum1);
    printf("1+...+100等于(do...while循环)：%d\n",sum2);
    printf("1+...+100等于(for循环)：%d\n",sum3);
    return 0;
}
