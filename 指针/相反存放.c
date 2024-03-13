#include <stdio.h>

int main()
{
    void inv(int *x,int n);
    int array[10],*p = array;
    printf("The original array:\n");
    for(int i=0;i<10;i++,p++){
        scanf("%d",p);
    }
    printf("\n");
    p = array;
    inv(p,10);
    printf("The array has been inverted:\n");
    for(p = array;p<array+10;p++){
        printf("%d ",*p);
    }
    return 0;
}
void inv(int *x,int n){
    int temp,*i,*j,*p,m=(n-1)/2;
    i = x;j = x+n-1;p=x+m;
    for(;i<=p;i++,j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
}