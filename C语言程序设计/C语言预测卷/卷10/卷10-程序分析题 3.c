#include <stdio.h>

int main()
{
    int a=0,b=1,c=2;
    if(c>b) a=b;
    else if(b<a) b=c;
    else c=a;
    printf("%d,%d",a,b);
    return 0;
}