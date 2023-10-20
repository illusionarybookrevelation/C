#include <stdio.h>
#define N 10
int main()
{
    int arr[N];
    int i,j,t,k;
    printf("input 10 numbers:");
    fflush(stdout);
    for(i=0;i<N;i++){
        scanf("%d",&t);
        arr[i] = t;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N-i;j++){
            if(arr[j] > arr[j+1]){
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }
    printf("the sorted numbers: \n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
