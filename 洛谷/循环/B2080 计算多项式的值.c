#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int n;
    double s=0.0;
    scanf("%f %d",&x,&n);
    for(int i=n;i>0;i--){
        s = s + pow(x,i);
    }
    printf("%.2f\n",s+1);
    return 0;
}