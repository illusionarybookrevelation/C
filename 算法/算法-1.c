#include <stdio.h>
#define h 100

int main()
{
    int b;
    float c=0;

    for(b=1;b<=h;b++) {
        float a=1.0;
        if (b % 2 == 0) {
            a = a*(-1);
        }
        c = c + a/b;
    }
    printf("结果是：%lf",c);

    return 0;
}
//1-1/2+1/3-1/4.....-1/100=?