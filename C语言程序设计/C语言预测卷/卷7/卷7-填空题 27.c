#include <stdio.h>

int main()
{
    int a[50],i;
    printf("输入50个整数：");
    for(i=0;i<50;i++) scanf("%d",&a[i]);
    for(i=1;i<=50;i++){
        if(i%10==0)
        {
            printf("%3d\n",a[i-1]);
        }
        printf("%3d",a[i-1]);
    }
    return 0;
}