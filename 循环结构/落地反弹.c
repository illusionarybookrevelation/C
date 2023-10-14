#include <stdio.h>
#define N 100
int main()
{
    float a=0,b=0;
    a = N / 2.0;
    b = a * 2 + N ;
    for(int i=2;i<10;i++){
        b = b + a;
        a = a / 2;
    }
    printf("第10次落地时共经过%f米，第10次反弹%f米",b,a/2);
    return 0;
}