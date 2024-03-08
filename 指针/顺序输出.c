#include <stdio.h>

int main()
{
    int *p1,*p2,*p,a,b;
    printf("please enter two integer number:");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a < b){
        p1 = &b;p2 = &a;
    }
    printf("max=%d,min=%d",*p1,*p2);
    return 0;
}