#include <stdio.h>

int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    for(int i=0;i<n;i++){
        a %= b;
        a *= 10;
    }
    a /= b;
    printf("%d",a);

    return 0;
}