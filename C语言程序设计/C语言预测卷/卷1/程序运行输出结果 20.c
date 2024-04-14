#include <stdio.h>
int a=4;
int f(int n){
    int t=0;
    static int a=5;
    if(n%2){
        int a=6;
        t+=a++;
    }
    else{
        int a=7;
        t+=a++;
    }
    return t+a++;
}
int main()
{
    int s=a,i=0;
    for(;i<2;i++){
        s+=f(i);
    }
    printf("%d\n",s);
    return 0;
}