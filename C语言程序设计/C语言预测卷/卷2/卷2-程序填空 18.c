#include <stdio.h>
void fun(int a,int b){
    int t;
    t=a;a=b;b=t;
}
int main()
{
    int c[10]={1,2,3,4,5,6,7,8,9,0},i;

    for(i=0;i<10;i+=2){
        fun(c[i],c[i+1]);
    }
    for(i=0;i<10;i++){
        printf("%d",c[i]);
    }
    return 0;
}