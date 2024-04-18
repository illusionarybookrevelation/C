#include <stdio.h>

int main()
{
    int a,b;
    a=b=4;
    a+=b%3;
    printf("%d %d",a,b);
    return 0;
}