#include <stdio.h>

int main()
{
    int i,a,b;
    a=b=0;
    for(i=0;i<10;i++){
        a+=i;
        b+=i+1;
    }
    printf("ż��֮��=%d\n",a);
    printf("����֮��=%d\n",b);
    return 0;
}