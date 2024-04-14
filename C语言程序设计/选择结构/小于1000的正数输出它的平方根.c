#include <stdio.h>
#include <math.h>
int main()
{
    int i,k;
    printf("请输入小于1000的正数：");
    scanf("%d",&i);
    if(i > 1000){
        printf("输入的数据超过了指定范围，请重新输入：");
        scanf("%d",&i);
    }
    k = sqrt(i);
    printf("%d的平方根的整数部分是%d\n",i,k);
    return 0;
}