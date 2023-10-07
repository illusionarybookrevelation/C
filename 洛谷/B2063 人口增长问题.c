#include <stdio.h>
int main()
{
    float x;
    int n;
    scanf("%f%d",&x,&n);
    for(int i=0;i<n;i++){
        x = x + (x*0.001);
    }
    printf("%.4f",x);
    return 0;
}