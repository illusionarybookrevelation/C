#include <stdio.h>

int main()
{
    int a,b,c,temp,max;
    printf("��������������");
    scanf("%d,%d,%d",&a,&b,&c);
    temp = (a > b) ? a : b;
    max = (temp > c) ? temp : c;
    printf("max=%d\n",max);
    return 0;
}