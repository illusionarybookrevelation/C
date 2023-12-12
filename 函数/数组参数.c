#include <stdio.h>
#define N 10
int max(int x ,int y);
void arr_max(int arr[],int size);
int main()
{
    int myarr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&myarr[i]);
    }
    arr_max(myarr,N);
    return 0;
}

void arr_max(int arr[],int size){
    int x=arr[0],y=0;
    for(int i=1;i<size;i++){
        if(max(arr[i],x) > x){
            x = max(arr[i],x);
            y = i;
        }
    }
    printf("最大的值是%d,它是第%d号元素\n",x,y+1);
}
int max(int x,int y){
    return (x>y ? x:y);
}