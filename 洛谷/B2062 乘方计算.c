#include <stdio.h>
int main()
{
    int a,n,g=0;
    scanf("%d%d",&a,&n);
    g = a * a;
    for(int i=0;i<n-2;i++){
        g = g * a;
    }
    printf("%d",g);
    return 0;
}
