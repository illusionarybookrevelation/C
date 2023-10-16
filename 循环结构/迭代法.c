#include <stdio.h>
#include <math.h>
int main()
{
    float a,x1,x2;
    scanf("%f",&a);
    x1 = a / 2;
    while(1){
        x2 = x1;
        x1 = 0.5*(x1+a/x1);
        if(fabs(x1-x2)<pow(10,-5)){
            break;
        }
    }
    printf("%f",x1);
    return 0;
}
