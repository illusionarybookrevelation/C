#include <stdio.h>

int main()
{
    int n,i,j;
    i=j=0;
    scanf("%d",&n);
    while(n!=0){
        if(n>0) i++;
        else j++;
        scanf("%d",&n);
    }
    printf("i=%3d,j=%3d\n",i,j);
    return 0;
}