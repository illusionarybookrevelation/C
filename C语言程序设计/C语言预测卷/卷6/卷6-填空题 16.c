#include <stdio.h>

int main()
{
    int i,a,b,c;
    for(i=101;i<1000;i++){
        a=i%10;
        b=i/10%10;
        c=i/100;
        if((a*a*a+b*b*b+c*c*c)==i){
            printf("%5d是水仙花数\n",i);
        }
    }
    return 0;
}