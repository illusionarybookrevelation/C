#include <stdio.h>

int main()
{
    void switch_num(int x[],int n);
    int arr[10],*p = arr,i;
    printf("请输入10个数，接下来会从大到小排序：");
    for(i=0;i<10;i++){
        scanf("%d",p++);
    }
    printf("\n");
    p = arr;
    switch_num(p,10);
    printf("排序过后为：");
    for(i=0,p=arr;i<10;i++,p++){
        printf("%d ",*p);
    }
    return 0;
}

void switch_num(int x[],int n){
   int i,j,t;
   for(i=0;i<n;i++){
       t = i;
       for(j=0;j<n;j++){
           if(x[j]<x[t]){
               x[j] = x[j] ^ x[t];
               x[t] = x[t] ^ x[j];
               x[j] = x[t] ^ x[j];
           }
       }
   }
}