#include <stdio.h>
#define num 20
int main()
{
    int i;
    double sum=0,a=2,b=1,t;
    for(i=1;i<=num;i++){
        sum = sum + a/b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("数列前20项和为：%16.10f",sum);
    return 0;
}
