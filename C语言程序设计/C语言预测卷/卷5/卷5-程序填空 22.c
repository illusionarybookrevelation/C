#include <stdio.h>
#define N 10
void swap(int b[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(b[j]>b[j+1]){
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
}
int main(){
    void swap(int b[],int n);
    int a[N],i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    swap(a,N);
    for(i=0;i<N;i++){
        printf("%4d",a[i]);
    }
    return 0;
}