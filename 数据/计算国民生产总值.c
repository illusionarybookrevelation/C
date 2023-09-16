#include <stdio.h>
#include <math.h>
int main()                //年增长率为7%，计算10年后与现在相比增长了多少，公式：p=(1+r)n，r为年增长率，n为年数,p为现在相比的倍数
{
    int a=10;
    double r=0.07,p;

    p = pow((1+r),a);

    printf("增长了%lf%%",(p*100));

    return 0;
}
