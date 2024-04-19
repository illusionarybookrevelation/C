#include <stdio.h>

int main()
{
    int a,b,k;
    scanf("%d %d",&a,&b);
    k=a;
    if(a<b) k=a%b;
    else k=b%a;
    printf("%d\n",k);
    return 0;
}