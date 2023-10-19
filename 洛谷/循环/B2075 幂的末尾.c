#include <stdio.h>

int main()
{
    long int a,b,c=1;
    scanf("%ld %ld",&a,&b);
    for(int i=0;i<b;i++){
         c *= a;
         c %= 1000;
    }
    printf("%03ld",c);
    return 0;
}
