#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[]={1,4,6,9,12,34,n};
    for(int j=0;j < (sizeof(arr)/sizeof(int))-1;j++){
        if(arr[j]>arr[j+1]){
            arr[j] = arr[j] ^ arr[j+1];
            arr[j+1] = arr[j+1] ^ arr[j];
            arr[j] = arr[j] ^ arr[j+1];
            }
    }
    for(int i=0;i < (sizeof(arr)/sizeof(int));i++){
        printf("%d ",arr[i]);
    }
    return 0;
}