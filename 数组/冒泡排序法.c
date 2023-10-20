#include <stdio.h>

int main()
{
    int arr[10];
    int i,j,t,k;
    printf("input 10 numbers:");
    fflush(stdout);
    for(i=0;i<10;i++){
        scanf("%d",&t);
        arr[i] = t;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[j] > arr[j+1]){
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }
    printf("the sorted numbers: \n");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
