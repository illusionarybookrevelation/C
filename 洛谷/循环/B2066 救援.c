#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double min=0.0,a,b,c,d,sum=0.0;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf %lf",&a,&b,&c);
        d = sqrt((a*a)+(b*b));
        min = d / 50 * 1.0;
        min = min*2 + c*1 + c*0.5;
        sum = sum + min;
        if(n==0)break;
    }
    printf("%d",(int)ceil(sum));
    return 0;
}
