#include <stdio.h>

void fun(int *x,int *y){
    int *p;
    *p=*x;
    *x=*y;
    *y=*p;
}
void fun_s(int *x,int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    //fun(p1,p2);
    //printf("%d %d\n",*p1,*p2);
    fun_s(p1,p2);
    printf("%d %d\n",*p1,*p2);
    return 0;
}