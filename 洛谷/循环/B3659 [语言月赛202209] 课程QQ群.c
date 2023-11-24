#include <stdio.h>

int main()
{
    int a,n,k,count=0;
    scanf("%d%d",&n,&k);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        if (a==k){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}