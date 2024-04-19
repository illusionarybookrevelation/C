#include <stdio.h>
int isprime(int x[],int n){
    int j,i,total=0;
    for(j=0;j<n;j++){
        for(i=2;i<x[j];i++){
            if(x[j]%i==0){
                break;
            }
        }
        if(i>=x[j]){
            total++;
        }
    }
    return total;
}
int main()
{
    int isprime(int x[],int n);
    int x[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    printf("数组中含有%d个素数\n", isprime(x,10));
    return 0;
}