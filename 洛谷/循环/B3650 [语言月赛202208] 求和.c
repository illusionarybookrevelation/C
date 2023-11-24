#include <stdio.h>

int main()
{
    long int n,count=0;
    scanf("%ld",&n);
    for (int i=1;i<=n;i++){
        count = i + count;
        printf("%ld",count);
        printf("\n");
    }
    return 0;
}
