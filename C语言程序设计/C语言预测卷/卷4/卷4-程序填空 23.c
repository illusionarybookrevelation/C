#include <stdio.h>

int main()
{
    int a[10],b[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        b[i] = a[i-1] + a[i+1];
    }
    for(i=1;i<10;i++){
        printf("%3d",b[i]);
        if(i%3==0){
            printf("\n");
        }
    }
    return 0;
}