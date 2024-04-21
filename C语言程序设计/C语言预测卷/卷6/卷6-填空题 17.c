#include <stdio.h>

int main()
{
    int a[10],i,j,t;
    printf("input 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=1;j<=9;j++){
        for(i=0;i<j;i++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("the sorted numbers:\n");
    for(i=0;i<10;i++){
        printf("%3d",a[i]);
    }
    return 0;
}