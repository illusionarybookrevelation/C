#include <stdio.h>

void rainmom(int *p);
int main()
{
    int a = 100;
    int *p = &a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",p);

    int b;
    printf("%p\n",&b);
    rainmom(&b);
    printf("%d\n",b);
    return 0;
}
void rainmom(int *p){
    //printf("%p",p);
    //手动输了1000

    //通过地址访问b这个变量
    *p = 1000;
}