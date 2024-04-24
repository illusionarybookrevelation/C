#include <stdio.h>

int main()
{
    int i,n;
    double fact;
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++){
        fact *= i;
    }
    printf("%f\n",fact);
    return 0;
}