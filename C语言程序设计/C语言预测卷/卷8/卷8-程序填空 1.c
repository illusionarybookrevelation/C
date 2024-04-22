#include <stdio.h>

int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
    return 0;
}