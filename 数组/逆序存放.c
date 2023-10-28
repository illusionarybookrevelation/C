#include <stdio.h>

int main()
{
    int arr[]={8,6,5,4,1};
    for(int i=sizeof(arr)/sizeof(int);i --> 0;){
        for(int j=0;j < (sizeof(arr)/sizeof(int))-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j+1] ^ arr[j];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }
    for(int i=0;i < (sizeof(arr)/sizeof(int));i++){
        printf("%d ",arr[i]);
    }
    return 0;
}