#include <stdio.h>

int main()
{
    int i,n;
    float x,avg;
    printf("ÇëÊäÈëÊı£º");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&x);
        avg=avg+x;
    }
    avg=avg/n;
    printf("avg=%f\n",avg);
    return 0;
}