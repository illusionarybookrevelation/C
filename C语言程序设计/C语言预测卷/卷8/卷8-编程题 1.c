#include <stdio.h>

int main()
{
    int i,s;
    s=0;
    for(i=1;i<=101;i+=2){
        s+=i;
    }
    printf("%d",s);
    return 0;
}