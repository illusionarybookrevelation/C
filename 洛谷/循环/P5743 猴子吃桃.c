#include <stdio.h>

int main()
{
    int i,s=0,k=1,n;
    scanf("%d",&n);
    for(i=0;i<(n-1);i++){
        k = (k+1)*2;
        s = k;
    }
    printf("%d",s);
    return 0;
}

