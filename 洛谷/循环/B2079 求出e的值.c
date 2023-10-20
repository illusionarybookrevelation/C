#include <stdio.h>

int main()
{
    double e=1.0,a=1.0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       e *= i;
       a += 1 / e;
    }
    printf("%.10lf",a);
    return 0;
}
