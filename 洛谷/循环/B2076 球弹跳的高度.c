#include <stdio.h>

int main()
{
    int h;
    double a=0,b=0;
    scanf("%d",&h);
    a = h / 2.0;
    b = h + a * 2;
    for(int i=2;i<10;i++){
        b += a  ;
        a = a / 2;
    }
    printf("%g\n",b);
    printf("%g",a / 2);
    return 0;
}
