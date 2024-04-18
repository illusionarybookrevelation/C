#include <stdio.h>
int fun(int a,int b){
    if(a>b) return a+b;
    else return b;
}
int main()
{
    int x=3,y=9,z=5,r;
    r=fun(fun(x,y),z);
    printf("%d\n",r);
    return 0;
}