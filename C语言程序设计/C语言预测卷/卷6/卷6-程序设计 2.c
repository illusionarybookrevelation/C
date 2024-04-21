#include <stdio.h>
int *max(int arr[]);
int *min(int arr[]);
int main()
{
    int arr[10],i,*x,*y;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    /**max(arr) += *min(arr);
    *min(arr) = *max(arr) - *min(arr);
    *max(arr) -= *min(arr);*/
    x = max(arr);
    y = min(arr);
    *x += *y;
    *y = *x - *y;
    *x -= *y;
    for(i=0;i<10;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
int *max(int arr[]){
    int *p,i;
    p=arr;
    for(i=0;i<10;i++){
        if(arr[i] > *p){
            p = &arr[i];
        }
    }
    return p;
}
int *min(int arr[]){
    int *p,i;
    p=arr;
    for(i=0;i<10;i++){
        if(arr[i] < *p){
            p = &arr[i];
        }
    }
    return p;
}