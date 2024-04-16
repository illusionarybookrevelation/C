#include <stdio.h>
#define N 10
int fun(int a[],int n){
    int max=1,i;
    for(i=0;i<n;i++){
        if((a[i]%2) != 0){
            if(a[i] > max){
                max=a[i];
            }
        }
    }
    return (max);
}
int main()
{
    int fun(int a[],int n);
    int a[N],i,k;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    k=fun(a,N);
    printf("The result is:%d\n",k);
    return 0;
}