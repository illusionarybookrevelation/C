#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    double y;
    scanf("%d",&x);
    if(x>1){
        y=sin(2*x);
    }else if(x<1){
        y=3-pow(x,2);
    }else{
        y=4+x;
    }
    printf("%f",y);
    return 0;
}