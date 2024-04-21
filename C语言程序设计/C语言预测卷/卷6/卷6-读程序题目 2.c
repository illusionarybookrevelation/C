#include <stdio.h>
int fun(int b){
    static int a=0;
    a=a+b;
    return (a);
}
int main()
{
    int a=3,b=10,f;
    f=fun(a)*fun(b);
    printf("f=%d\n",f);
    return 0;
}