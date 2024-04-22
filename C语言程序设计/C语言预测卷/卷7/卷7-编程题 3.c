#include <stdio.h>
int fun(int n);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum = fun(n);
    printf("%d",sum);
    return 0;
}
int fun(int n){
    static int sum=1;
    if(n==1){
        return sum;
    }else{
        sum*=n;
    }
    n--;
    return fun(n);
}