#include <stdio.h>

int main()
{
    int n;
    double sum=0,a=1.0,b=2.0,k;
    scanf("%d",&n);
    while(n--!=0){
        sum = sum + b/a;
        k = b + a;
        a = b;
        b = k;
    }
    printf("%.4f",sum);
    return 0;
}