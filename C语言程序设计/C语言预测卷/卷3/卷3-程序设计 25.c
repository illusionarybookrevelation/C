#include <stdio.h>
int fun(int x,int y){
    int n,i;
    for(i=x;i<=y;i++){
        if((i%4 == 0 && i%100 != 0) || i%400 == 0){
            n+=1;
        }
    }
    return n;
}
int main()
{
    int fun(int,int);
    int a,b,t;
    int m;
    scanf("%d%d",&a,&b);
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    m=fun(a,b);
    printf("m=%d",m);
    return 0;
}