#include <stdio.h>

int main()
{
    int i,a,b;
    a=b=0;
    for(i=0;i<10;i++){
        a+=i;
        b+=i+1;
    }
    printf("偶数之和=%d\n",a);
    printf("奇数之和=%d\n",b);
    return 0;
}