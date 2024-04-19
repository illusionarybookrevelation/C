#include <stdio.h>
int fun(int *x,int n){
    if(n==0) return x[0];
    else return x[0] + fun(x+1,n-1);
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    printf("%d\n",fun(a,2));
    return 0;
}