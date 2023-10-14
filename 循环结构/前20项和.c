#include <stdio.h>

int main()
{
    float a=1,b=2,c=0,d;
    int i=0;
    while(i++<20){
        c = c + b / a;
        d = b;
        b = a + b;
        a = d;
    }
    printf("%f",c);
    return 0;
}
