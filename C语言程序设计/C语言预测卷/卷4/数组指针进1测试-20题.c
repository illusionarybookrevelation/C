#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int *p;
    p=a;
    p+=2;
    printf("%d",p[0]);
    return 0;
}