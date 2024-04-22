#include <stdio.h>
#define N 10
int main()
{
    int arr[N];
    int i,j,temp;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf("%3d",arr[i]);
    }
    return 0;
}