#include <stdio.h>

int main()
{
    int a[4] = {5,6,7,8};
    int i;
    for(i=0;i<4;i++){
        a[i]=a[i]+i;
    }
    for(i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}